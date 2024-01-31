@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (id)init;
- (id)historyDescription;
- (void)simulateCrashWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)recordEvent:(id)a0;

@end
