@interface FRCLivePhotoMetadata : NSObject

@property (nonatomic) long long frameIndex;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) BOOL isIDR;
@property (nonatomic) BOOL interpolated;
@property (nonatomic) BOOL noRecipeGap;
@property (nonatomic) unsigned long long ptsInNanos;
@property (nonatomic) unsigned long long originalPTSInNanos;
@property (nonatomic) long long sequenceAdjusterRecipe;
@property (nonatomic) long long sequenceAdjusterDisplacement;

@end
