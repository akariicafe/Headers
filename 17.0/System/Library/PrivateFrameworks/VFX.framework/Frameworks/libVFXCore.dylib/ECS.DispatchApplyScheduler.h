@interface ECS.DispatchApplyScheduler : ECS.Scheduler {
    void /* unknown type, empty encoding */ sema;
    void /* unknown type, empty encoding */ inFlightJobs;
    void /* unknown type, empty encoding */ inFlightJobGroups;
    void /* unknown type, empty encoding */ currentStageIndex;
    void /* unknown type, empty encoding */ lastNonActionableStep;
    void /* unknown type, empty encoding */ currentStep;
    void /* unknown type, empty encoding */ jobPickingCount;
    void /* unknown type, empty encoding */ jobPickingSkipCount;
    void /* unknown type, empty encoding */ jobPickingFailedCount;
    void /* unknown type, empty encoding */ jobPickingIterationCount;
}

@end
