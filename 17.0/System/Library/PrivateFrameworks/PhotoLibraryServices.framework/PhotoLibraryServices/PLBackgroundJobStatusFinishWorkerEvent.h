@class NSString;

@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;

- (id)statusDump;
- (void).cxx_destruct;

@end
