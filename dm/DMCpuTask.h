#ifndef DMCpuTask_DEFINED
#define DMCpuTask_DEFINED

#include "DMReporter.h"
#include "DMTask.h"
#include "DMTaskRunner.h"
#include "SkBitmap.h"
#include "SkString.h"
#include "SkTemplates.h"
#include "gm.h"
#include "gm_expectations.h"

// This is the main entry point for drawing GMs with the CPU.  Commandline
// flags control whether this kicks off various comparison tasks when done.
// Currently:
//   --replay: spawn a DMReplayTask to record into a picture, draw the picture, and compare.

namespace DM {

class CpuTask : public Task {
public:
    CpuTask(const char* name,
            Reporter*,
            TaskRunner*,
            const skiagm::ExpectationsSource&,
            skiagm::GMRegistry::Factory,
            SkBitmap::Config);

    virtual void draw() SK_OVERRIDE;
    virtual bool usesGpu() const SK_OVERRIDE { return false; }
    virtual bool shouldSkip() const SK_OVERRIDE;
    virtual SkString name() const SK_OVERRIDE { return fName; }

private:
    skiagm::GMRegistry::Factory fGMFactory;
    SkAutoTDelete<skiagm::GM> fGM;
    const SkString fName;
    const skiagm::Expectations fExpectations;
    const SkBitmap::Config fConfig;
};

}  // namespace DM

#endif // DMCpuTask_DEFINED
