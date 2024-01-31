@class HFTemperatureColor, NAIdentity, HFRGBColor, NSString;
@protocol HFColorPrimitive;

@interface HFColorCollection : NSObject <HFColorLikeObject, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) HFRGBColor *RGBColor;
@property (readonly, copy, nonatomic) HFTemperatureColor *temperatureColor;
@property (readonly, copy, nonatomic) id<HFColorPrimitive> preferredColorPrimitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrimitiveColors:(id)a0;
- (id)colorPrimitives;
- (id)colorByAdjustingForProfile:(id)a0;
- (id)initWithPrimitiveColor:(id)a0;

@end
