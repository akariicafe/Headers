@class NSString;

@interface SXGradientFactory : NSObject <SXGradientFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)colorsFromColorStops:(id)a0;
- (id)gradientForColorStops:(id)a0 angle:(double)a1;
- (id)locationsFromColorStops:(id)a0;

@end
