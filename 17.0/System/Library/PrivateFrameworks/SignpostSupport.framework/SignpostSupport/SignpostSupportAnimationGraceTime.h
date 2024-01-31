@interface SignpostSupportAnimationGraceTime : NSObject

@property (readonly, nonatomic) unsigned long long animationType;
@property (nonatomic) unsigned long long firstFrameGraceTimeMs;

- (id)initWithAnimationType:(unsigned long long)a0 firstFrameGraceTimeMs:(unsigned long long)a1;

@end
