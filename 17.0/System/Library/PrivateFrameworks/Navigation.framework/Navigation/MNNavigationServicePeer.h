@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)isEntitled;
- (id)initWithConnection:(id)a0;
- (id)auditToken;
- (id)description;
- (void).cxx_destruct;
- (void)clearConnection;

@end
