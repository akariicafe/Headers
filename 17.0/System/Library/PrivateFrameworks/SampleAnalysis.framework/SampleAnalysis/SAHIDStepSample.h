@class SAThread, SATask, SATimestamp;

@interface SAHIDStepSample : NSObject {
    SATask *_task;
    SAThread *_thread;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _startSampleIndex;
    unsigned long long _endSampleIndex;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
