@interface PHASESessionVolume : NSObject

@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) long long unit;
@property (readonly, nonatomic) BOOL muted;

- (id)description;
- (id)initWithValue:(float)a0 unit:(long long)a1;
- (id)initWithValue:(float)a0 unit:(long long)a1 muted:(BOOL)a2;

@end
