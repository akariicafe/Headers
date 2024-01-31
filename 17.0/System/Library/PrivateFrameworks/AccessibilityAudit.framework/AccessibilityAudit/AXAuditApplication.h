@class AXAuditPSN, NSString;

@interface AXAuditApplication : NSObject

@property (retain, nonatomic) AXAuditPSN *psnObj;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
