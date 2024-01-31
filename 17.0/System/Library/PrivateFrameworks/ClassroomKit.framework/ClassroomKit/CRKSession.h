@class CRKRemoteEndpoint, NSDictionary, CRKTransportPreflightOperation, CATStateMachine, CATTransport;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject {
    double mCurrentBackoffInterval;
}

@property (readonly, nonatomic) id<CRKGrowthFunction> backoffGrowthFunction;
@property (retain, nonatomic) CATStateMachine *stateMachine;
@property (retain, nonatomic) CATTransport *transport;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) double willLoseBeaconWarningTimeout;
@property (retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation;
@property (weak, nonatomic) id<CRKSessionDelegate> delegate;
@property (readonly) CRKRemoteEndpoint *endpoint;
@property (nonatomic) BOOL requiresBeacon;
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;

- (void)didConnect;
- (void)connect;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)rejected;
- (void)registerDefaults;
- (void)delegateDidBecomeNotConnectable;
- (void)enterOutOfRange;
- (void)failedToConnect;
- (void)backoffDidFinish;
- (void)cancelConnectionAttempt;
- (void)delegateConnected;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectableAndDidLoseBeacon;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)exitBackoffCanConnect;
- (void)foundBeacon;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (void)lostConnection;
- (void)processFinishedTransportPreflightOperation:(id)a0;
- (void)resetBackoff;
- (void)startPreflightingTransport:(id)a0;
- (void)stopPreflightingTransport;
- (id)studentSocketOptions;
- (void)transportPreflightOperationDidFinish:(id)a0;
- (void)tryConnecting;

@end
