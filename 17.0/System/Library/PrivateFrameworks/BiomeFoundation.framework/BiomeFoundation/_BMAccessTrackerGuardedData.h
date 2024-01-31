@class NSMutableDictionary;

@interface _BMAccessTrackerGuardedData : NSObject {
    NSMutableDictionary *_loggedReads;
    NSMutableDictionary *_loggedWrites;
    NSMutableDictionary *_cachedSandboxCheckResults;
}

- (id)init;
- (void).cxx_destruct;

@end
