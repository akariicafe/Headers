@class NSArray;

@interface LipMovementData : NSObject

@property (readonly, nonatomic) NSArray *blendshapes;
@property (readonly, nonatomic) unsigned long long absMachTime;

- (void).cxx_destruct;
- (id)initWithBlendshape:(id)a0 andTime:(unsigned long long)a1;

@end
