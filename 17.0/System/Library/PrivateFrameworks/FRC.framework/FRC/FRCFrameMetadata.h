@interface FRCFrameMetadata : NSObject

@property (nonatomic) unsigned long long ptsInNanos;
@property (nonatomic) unsigned long long originalPTSInNanos;
@property (nonatomic) unsigned long long sequenceAdjusterRecipe;
@property (nonatomic) long long sequenceAdjusterDisplacement;

@end
