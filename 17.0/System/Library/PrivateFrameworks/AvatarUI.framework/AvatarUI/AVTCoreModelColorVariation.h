@class AVTCoreModelColor, AVTColorPreset;

@interface AVTCoreModelColorVariation : NSObject

@property (readonly, nonatomic) AVTColorPreset *colorPreset;
@property (readonly, nonatomic) AVTCoreModelColor *color;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithColor:(id)a0 colorPreset:(id)a1;

@end
