@class UIColor, NSString;

@interface DOCTagRenderingAppearance : NSObject <DOCTagRenderingAppearanceProviding>

@property (readonly) BOOL outlineTagsToIndicateMixedState;
@property (readonly) double defaultBorderWidth;
@property (readonly) UIColor *underlyingColorForNoneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (double)_defaultBorderWidth;
- (long long)imageWeightForVariant:(unsigned long long)a0;

@end
