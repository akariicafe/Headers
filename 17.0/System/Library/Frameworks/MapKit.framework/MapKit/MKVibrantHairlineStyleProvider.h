@class UIColor, NSString;

@interface MKVibrantHairlineStyleProvider : NSObject <MKHairlineViewStyleProvider>

@property (readonly, nonatomic) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)vibrancyEffectForTraitCollection:(id)a0;

@end
