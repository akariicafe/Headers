@interface MXDuckingSource : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned long long ID;
@property (nonatomic) float duckVolume;
@property (nonatomic) float duckFadeDuration;

- (void)dealloc;
- (id)initWithType:(unsigned int)a0 ID:(unsigned long long)a1 duckVolume:(float)a2 duckFadeDuration:(float)a3;

@end
