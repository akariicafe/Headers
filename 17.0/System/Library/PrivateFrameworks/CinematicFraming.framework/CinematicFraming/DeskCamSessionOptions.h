@interface DeskCamSessionOptions : NSObject

@property (nonatomic) float viewportScaleMultiplierPortrait;
@property (nonatomic) float viewportScaleMultiplierLandscape;

- (id)initWithPlist:(id)a0;
- (id)asDictionary;
- (id)initWithPlistPath:(id)a0;

@end
