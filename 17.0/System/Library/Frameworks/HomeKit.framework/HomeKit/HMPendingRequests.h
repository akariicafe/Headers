@class NSMutableArray;

@interface HMPendingRequests : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *contextLists;

- (id)uuidForAccessoryDescriptionUUID:(id)a0;
- (id)init;
- (id)removeRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)retrieveProgressBlockForIdentifier:(id)a0;
- (void)addCompletionBlock:(id)a0 forIdentifier:(id)a1;
- (void)addEvent:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)removeTriggerForIdentifier:(id)a0;
- (id)removeMediaSystemBuilderForIdentifier:(id)a0;
- (id)retrieveCompletionBlockForIdentifier:(id)a0;
- (id)removeEventsForIdentifier:(id)a0;
- (id)removeAccessoryForIdentifier:(id)a0;
- (id)retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)removeApplicationDataForIdentifier:(id)a0;
- (void)addMediaSystemBuilder:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addEvents:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)_addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (void)addAction:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addTrigger:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)_retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1 remove:(BOOL)a2;
- (id)removeProgressBlockForIdentifier:(id)a0;
- (void)addAccessory:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (void)addProgressHandler:(id)a0 forAccessoryIdentifier:(id)a1;
- (id)removeAccessoryDescriptionForIdentifier:(id)a0;
- (void)addAccessoryDescription:(id)a0 progressBlock:(id)a1 andCompletionBlock:(id)a2 forIdentifier:(id)a3;
- (void).cxx_destruct;
- (id)removeActionForIdentifier:(id)a0;
- (id)removeEventForIdentifier:(id)a0;
- (id)removeCompletionBlockForIdentifier:(id)a0;
- (void)addApplicationData:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)retrieveAccessoryDescriptionForIdentifier:(id)a0;

@end
