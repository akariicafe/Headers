@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject

@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) NSDictionary *additionalPropertyColors;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToSceneKitMaterial:(id)a0;

@end
