@class IOKMatchingNotification, NSMutableSet, NSString;

@interface TSDIOKServiceMatcher : NSObject {
    IOKMatchingNotification *_matchNotification;
    IOKMatchingNotification *_terminateNotification;
    NSMutableSet *_matchedEntryIDs;
    NSString *_identifier;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)serviceMatched:(id)a0;
- (unsigned long long)getMatchedCount;
- (void)handleServiceMatched:(id)a0;
- (void)handleServiceTerminated:(id)a0;
- (void)serviceTerminated:(id)a0;
- (BOOL)startNotificationsWithMatchingDictionary:(id)a0;

@end
