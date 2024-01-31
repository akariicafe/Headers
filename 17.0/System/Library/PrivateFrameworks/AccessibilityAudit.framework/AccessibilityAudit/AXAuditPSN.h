@interface AXAuditPSN : NSObject

@property (nonatomic) struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } psn;

+ (id)createWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
