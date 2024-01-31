@class NSUUID, NSString, ASDClipRequest, NSObject;
@protocol OS_dispatch_queue, ASDClipSessionDelegate, ASDClipServiceBroker;

@interface ASDClipSession : NSObject <ASDClipSessionChannel> {
    id<ASDClipServiceBroker> _broker;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ASDClipRequest *_request;
}

@property (weak, nonatomic) id<ASDClipSessionDelegate> delegate;
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)cancelInstallWithCompletionHandler:(id /* block */)a0;
- (void)channelNotifyDidComplete;
- (void)channelNotifyDidFailWithError:(id)a0;
- (void)channelNotifyDidInstallPlaceholder;
- (void)channelNotifyDidProgress:(double)a0;
- (void)channelStateDidClose;
- (void)channelStateDidOpen;
- (void)continueInstallWithCompletionHandler:(id /* block */)a0;
- (void)downloadAndInstallWithCompletionHandler:(id /* block */)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1 usingBroker:(id)a2;
- (void)installPlaceholderWithCompletionHandler:(id /* block */)a0;
- (void)startDownloadWithCompletionHandler:(id /* block */)a0;

@end
