@class SKRemoteEngagementRemoteViewController, NSString, NSObject;
@protocol OS_dispatch_queue, SKEngagementPresenterProtocol, OS_dispatch_semaphore;

@interface SKRemoteEngagementPresenterViewController : UIViewController <SKEngagementViewServiceProtocol>

@property (retain) SKRemoteEngagementRemoteViewController *remoteViewController;
@property (readonly) NSObject<OS_dispatch_queue> *engagementPresentationQueue;
@property (readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore;
@property (weak, nonatomic) id<SKEngagementPresenterProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_loadRemoteViewController;
- (void)presentEngagementRequestData:(id)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;

@end
