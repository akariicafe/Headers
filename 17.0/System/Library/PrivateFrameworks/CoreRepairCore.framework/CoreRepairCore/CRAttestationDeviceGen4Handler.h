@interface CRAttestationDeviceGen4Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen4Device:(int)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
