@class _UIAsyncInvocation, SFBrowserRemoteViewController, SFQueueingServiceViewControllerProxy;
@protocol SFServiceViewControllerProtocol;

@interface SFSafariViewControllerDataStore : NSObject {
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFBrowserRemoteViewController *_remoteViewController;
}

@property (class, readonly, nonatomic) SFSafariViewControllerDataStore *defaultDataStore;

- (id)_init;
- (void).cxx_destruct;
- (void)clearWebsiteDataWithCompletionHandler:(id /* block */)a0;

@end
