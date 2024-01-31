@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IRSessionClientProxy : NSObject <IRXPCSessionClient>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)_sessionDidFailWithError:(id)a0;
- (void)invalidateXPCConnection;
- (void)_didUpdateContext:(id)a0;
- (void)_sessionInterruptedWithReason:(long long)a0 timestamp:(double)a1;
- (void)_sessionInterruptionReasonEnded:(long long)a0 timestamp:(double)a1;

@end
