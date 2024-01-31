@class NSArray;

@interface _UIFluidSliderInteractionConfiguration : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setCustomDrivers:) NSArray *_customDrivers;
@property (readonly, nonatomic) struct CGSize { double width; double height; } trackSize;
@property (nonatomic) double stretchAmount;
@property (nonatomic) unsigned long long preferredInputMethods;

+ (id)configurationWithTrackSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithTrackSize:(struct CGSize { double x0; double x1; })a0;

@end
