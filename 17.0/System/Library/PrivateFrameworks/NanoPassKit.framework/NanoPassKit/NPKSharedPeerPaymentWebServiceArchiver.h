@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>

@property (retain, nonatomic) NPKCompanionAgentConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)archiveContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompanionAgentConnection:(id)a0;

@end
