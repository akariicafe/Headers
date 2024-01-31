@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}

- (id)init;
- (void)dealloc;
- (void)_flush;
- (void)invalidate;
- (void)_excessiveConnFailuresDetectedOn:(id)a0 owner:(id)a1;
- (void).cxx_destruct;
- (void)noteSuspectFlow:(id)a0 withOwner:(id)a1;

@end
