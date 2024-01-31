@class NSNumber, _PASLazyPurgeableResult, NSDate;

@interface SGMessageEventDissectorGuardedData : NSObject {
    NSDate *_lastWindowStartTime;
    NSNumber *_currentAllowedMessageCount;
    _PASLazyPurgeableResult *_eventClassifierModel;
}

- (void).cxx_destruct;

@end
