@class HMMTRAccessoryServerBrowser, NSObject;
@protocol OS_dispatch_queue, HMMTRSoftwareUpdateProviderDelegate;

@interface HMMTRSoftwareUpdateProvider : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak) id<HMMTRSoftwareUpdateProviderDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)notifyUpdateRequestedForNodeID:(id)a0 isUserTriggered:(BOOL)a1;
- (void)updateOTAProviderStateForNodeID:(id)a0 otaProviderState:(long long)a1;
- (id)initWithQueue:(id)a0 browser:(id)a1;
- (void)notifyDelegateOfApplyUpdateWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfNotifyUpdateWithPairing:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegateOfQueryImageWithPairing:(id)a0 requestParams:(id)a1 completionHandler:(id /* block */)a2;

@end
