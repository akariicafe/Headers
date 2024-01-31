@class FBSDisplayIdentity;

@interface _EXBDisplayMonitorIdentityRecord : NSObject

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic, getter=didConnectAtInit) BOOL connectedAtInit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 connectedAtInit:(BOOL)a1;

@end
