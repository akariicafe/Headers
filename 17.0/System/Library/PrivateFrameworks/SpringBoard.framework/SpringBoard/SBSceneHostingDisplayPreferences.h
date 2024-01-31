@class CADisplayModeCriteria, FBSDisplayConfigurationRequest;

@interface SBSceneHostingDisplayPreferences : NSObject <NSCopying>

@property (readonly, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (readonly, nonatomic) struct CGSize { double width; double height; } logicalScale;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) BOOL keepOtherModes;
@property (readonly, nonatomic) CADisplayModeCriteria *CADisplayModeCriteria;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayConfigurationRequest:(id)a0 logicalScale:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 keepOtherModes:(BOOL)a3;

@end
