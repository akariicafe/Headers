@class NSSet, NSString, SYSession, NSObject;
@protocol VCShortcutSyncService, OS_os_transaction, OS_dispatch_queue, VCCompanionSyncSessionDelegate;

@interface VCCompanionSyncSession : NSObject <SYSessionDelegate>

@property (class, readonly, nonatomic) long long direction;

@property (readonly, nonatomic) SYSession *session;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) id<VCShortcutSyncService> service;
@property (readonly, copy, nonatomic) NSSet *syncDataHandlers;
@property (weak, nonatomic) id<VCCompanionSyncSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetDataStoreForSyncSession:(id)a0 completion:(id /* block */)a1;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (id)initWithSYSession:(id)a0 service:(id)a1 syncDataHandlers:(id)a2;

@end
