@class NSString, NSDictionary, SYStore, SYSession;

@interface SYStoreSessionOwner : NSObject <SYSessionDelegate>

@property (readonly, nonatomic) BOOL isResetSync;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSDictionary *idsOptions;
@property (weak, nonatomic) SYStore *store;
@property (copy, nonatomic) id /* block */ errorCallback;
@property (copy, nonatomic) id /* block */ onComplete;
@property (retain, nonatomic) SYSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (BOOL)syncSession:(id)a0 rollbackChangesWithError:(id *)a1;

@end
