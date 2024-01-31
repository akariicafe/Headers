@class NSString;

@interface OZFxPixelTransformsHandler : NSObject <PROAPIObject, FxPixelTransformsAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setAgent:(const void *)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })destinationInversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })destinationPixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })inversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransform;
- (void)setPostTransform:(const void *)a0;
- (void)setPreTransform:(const void *)a0;

@end
