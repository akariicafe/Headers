@class CKDZonePCSData, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDAnonymousSharingManager : NSObject

@property (readonly, weak, nonatomic) CKDContainer *container;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;

- (id)initWithContainer:(id)a0;
- (id)pcsCache;
- (void).cxx_destruct;
- (id)_generateHashIdentifierForAnonymousShareTuple:(id)a0;
- (void)_lockedFetchSystemZonePCSDataWithCompletion:(id /* block */)a0;
- (void)_locked_decryptShareTuple:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_locked_encryptShareTuples:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)addAnonymousSharesToSharedDB:(id)a0 operation:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)decryptShareTuple:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)encryptShareTuples:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)removeAnonymousSharesFromSharedDB:(id)a0 operation:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
