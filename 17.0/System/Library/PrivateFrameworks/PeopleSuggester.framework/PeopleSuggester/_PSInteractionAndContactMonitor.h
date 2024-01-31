@class CNContactStore, NSSet, _CDInteractionStore, NSString, NSMutableOrderedSet, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _PSInteractionAndContactMonitor : NSObject <CNChangeHistoryEventVisitor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_contactStoreEnumerationCache;
    struct __CFSet { } *_contactIdsInContactStore;
    NSData *_changeHistoryToken;
    struct __CFSet { } *_historyChangesQueuedToAdd;
    NSMutableOrderedSet *_historyChangesQueuedToAddToEnumerationCache;
    struct __CFSet { } *_historyChangesQueuedToDelete;
    id /* block */ _processContactChanges;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (copy, nonatomic) NSSet *contactIdsSeen;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)notifyWhenContactStoreChanged;
- (void)visitUpdateContactEvent:(id)a0;
- (void)populateContactIdCachesWithMessageCache:(id)a0 shareCache:(id)a1;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteractionStore:(id)a0 contactStore:(id)a1;
- (void)fetchAllContactIdsFromContactStore;
- (void)fetchChangedContactIdsFromContactStore;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)notifyWhenContactAddedToInteractionStore:(id)a0;
- (BOOL)contactIdIsInContactStore:(id)a0;
- (void)enumerateContactStoreWithBlock:(id /* block */)a0;

@end
