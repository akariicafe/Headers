@class BMAccessControlPolicy, NSString, BMProcess, BMComputeSourceServer;

@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer>

@property (readonly, weak, nonatomic) BMComputeSourceServer *server;
@property (readonly, nonatomic) BMProcess *clientProcess;
@property (readonly, nonatomic) BMAccessControlPolicy *accessControlPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServer:(id)a0 clientProcess:(id)a1;
- (void)eventsPrunedWithStreamIdentifier:(id)a0 reason:(unsigned long long)a1;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 signpostID:(unsigned long long)a2 eventData:(id)a3;
- (void).cxx_destruct;

@end
