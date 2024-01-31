@class NSDictionary, NSString;

@interface MCMCodeSignInfo : NSObject

@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int platform;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithURL:(id)a0 error:(unsigned long long *)a1;
- (void).cxx_destruct;

@end
