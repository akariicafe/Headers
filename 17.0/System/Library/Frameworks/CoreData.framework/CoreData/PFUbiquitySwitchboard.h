@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)coordinatorWillRemoveStore:(id)a0;

@end
