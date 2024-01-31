@class CRKShareTargetBrowserTransportFactory, NSString, CATOperationQueue, CATTaskClient, CRKShareTargetCollector, NSObject;
@protocol OS_dispatch_queue, CRKShareTargetBrowserDelegate;

@interface CRKShareTargetBrowser : NSObject <CATTaskClientDelegate, CATTaskOperationNotificationDelegate, CRKShareTargetCollectorDelegate> {
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    id<CRKShareTargetBrowserDelegate> mDelegate;
    CATOperationQueue *mOperationQueue;
    BOOL mBrowsing;
    BOOL mIsValid;
}

@property (retain, nonatomic) CATTaskClient *studentClient;
@property (retain, nonatomic) CATTaskClient *instructorClient;
@property (readonly, nonatomic) CRKShareTargetBrowserTransportFactory *transportFactory;
@property (readonly, nonatomic) CRKShareTargetCollector *shareTargetCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)delegateDidInterruptWithError:(id)a0;
- (void)suspend;
- (void)invalidate;
- (void)clientDidConnect:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)invalidateClient:(id)a0;
- (void)acquireStudentActivityAssertion;
- (void)acquireStudentActivityAssertionOperationDidFail:(id)a0;
- (void)browseForInstructorTargetsOperationDidFail:(id)a0;
- (void)browseForStudentTargetsOperationDidFail:(id)a0;
- (void)connectToInstructord;
- (void)connectToStudentd;
- (void)delegateDidFindTargets:(id)a0;
- (void)delegateDidRemoveTargets:(id)a0;
- (BOOL)isClientInvalidationError:(id)a0;
- (id)makeShareTargetsWithDictionaries:(id)a0 taskClient:(id)a1;
- (void)shareTargetCollector:(id)a0 didFindTargets:(id)a1;
- (void)shareTargetCollector:(id)a0 didRemoveTargets:(id)a1;
- (void)startBrowsingForInstructorTargets;
- (void)startBrowsingForStudentTargets;
- (void)tearDownInstructorClient;
- (void)tearDownStudentClient;

@end
