@interface ECS.Scheduler : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ enableRecording;
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentJobID;
    void /* unknown type, empty encoding */ currentJobName;
    void /* unknown type, empty encoding */ recurrentJobs;
    void /* unknown type, empty encoding */ orderedRecurrentJobs;
    void /* unknown type, empty encoding */ jobQueueForThisFrame;
    void /* unknown type, empty encoding */ pendingJobsToEnqueueForThisFrame;
    void /* unknown type, empty encoding */ pendingJobsToEnqueueForThisFrameOnly;
    void /* unknown type, empty encoding */ groupsToUnregister;
    void /* unknown type, empty encoding */ liveQueryCountByJobID;
    void /* unknown type, empty encoding */ needsRescheduling;
    void /* unknown type, empty encoding */ needsReschedulingForThisFrame;
    void /* unknown type, empty encoding */ dependenciesByJob;
    void /* unknown type, empty encoding */ schedulerEventsRecordedDuringLastFrame;
    void /* unknown type, empty encoding */ queriesRecordedDuringLastFrame;
    void /* unknown type, empty encoding */ schedulerEventsRecordedDuringThisFrame;
    void /* unknown type, empty encoding */ queriesRecordedDuringThisFrame;
    void /* unknown type, empty encoding */ simulationTimeScale;
}

@end
