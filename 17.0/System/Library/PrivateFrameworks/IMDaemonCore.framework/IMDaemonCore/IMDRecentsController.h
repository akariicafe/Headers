@class IMTimer, NSMutableDictionary;

@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}

+ (id)sharedInstance;

- (void)noteRecentMessageForPeople:(id)a0;
- (void)__pruneTypingContexts;
- (void)updateLatestActiveDestination:(id)a0 ForHandle:(id)a1 incomingType:(unsigned char)a2;
- (BOOL)hasRecentlyMessaged:(id)a0;
- (void).cxx_destruct;
- (void)_setTimerForPruningTypingContext;
- (id)activeDeviceForHandle:(id)a0;

@end
