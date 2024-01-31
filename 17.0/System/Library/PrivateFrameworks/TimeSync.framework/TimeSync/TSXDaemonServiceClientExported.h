@class NSString, TSXDaemonServiceClient;

@interface TSXDaemonServiceClientExported : NSObject <TSXDaemonServiceClientProtocol>

@property (weak, nonatomic) TSXDaemonServiceClient *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)daemonClientNotification:(unsigned int)a0 ioResult:(unsigned int)a1 arguments:(struct ScalarArgsArray { unsigned long long x0[16]; unsigned int x1; } *)a2;
- (void)daemonClientRefresh;

@end
