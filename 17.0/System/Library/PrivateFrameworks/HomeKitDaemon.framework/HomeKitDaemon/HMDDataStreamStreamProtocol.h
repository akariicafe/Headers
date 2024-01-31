@class NSString, NSMapTable;
@protocol HMDDataStreamProtocolDelegate;

@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>

@property (readonly) NSMapTable *sockets;
@property (readonly, weak) id<HMDDataStreamProtocolDelegate> dataStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)protocolName;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerSocket:(id)a0;
- (void)_closeAllSocketsWithError:(id)a0;
- (void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)a0;
- (void)_reevaluateTrafficClassForDataStream;
- (void)dataStream:(id)a0 didFailWithError:(id)a1;
- (void)dataStream:(id)a0 didReceiveEvent:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveRequest:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveResponse:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStreamDidClose:(id)a0;
- (void)dataStreamDidOpen:(id)a0;
- (void)dataStreamInitiatedClose:(id)a0;
- (void)evaluateOptionsForSocket:(id)a0;
- (id)initWithDataStream:(id)a0;
- (void)sendData:(id)a0 socket:(id)a1 completion:(id /* block */)a2;
- (void)unregisterSocket:(id)a0;

@end
