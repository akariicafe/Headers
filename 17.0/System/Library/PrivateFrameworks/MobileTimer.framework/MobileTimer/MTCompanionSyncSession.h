@class NSArray, NSString, SYSession, MTCompanionSyncRequest, NSMutableArray;
@protocol MTSyncServiceDelegate;

@interface MTCompanionSyncSession : NSObject <SYSessionDelegate>

@property (retain, nonatomic) SYSession *session;
@property (retain, nonatomic) MTCompanionSyncRequest *request;
@property (retain, nonatomic) NSArray *pendingChanges;
@property (retain, nonatomic) NSMutableArray *processedChanges;
@property (nonatomic) unsigned long long lastIndex;
@property (weak, nonatomic) id<MTSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0 delegate:(id)a1;
- (id)sessionDescription;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 request:(id)a1 delegate:(id)a2;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;

@end
