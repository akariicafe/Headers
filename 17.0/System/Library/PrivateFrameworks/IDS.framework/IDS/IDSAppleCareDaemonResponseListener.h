@class NSString, IDSDaemonRequestTimer;

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer *_requestTimer;
    id /* block */ _disconnectedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonDisconnected;
- (void).cxx_destruct;
- (void)applecareResponseForRequestID:(id)a0 withError:(id)a1;
- (id)initWithDisconnectedBlockAndNoTimeout:(id /* block */)a0;
- (id)initWithRequestTimer:(id)a0;

@end
