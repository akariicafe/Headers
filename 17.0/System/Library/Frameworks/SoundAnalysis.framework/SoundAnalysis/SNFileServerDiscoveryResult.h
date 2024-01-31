@interface SNFileServerDiscoveryResult : NSObject <SNResult>

@property (nonatomic, retain) void /* unknown type, empty encoding */ serverInfo;
@property (nonatomic) void /* unknown type, empty encoding */ state;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 state:(unsigned long long)a1;

@end
