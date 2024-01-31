@interface CRFDRGen6DeviceHandler : CRFDRGen3DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen6ProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getPatchInfoPerSPC;
- (BOOL)supportPatch;

@end
