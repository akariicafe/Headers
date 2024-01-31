@interface MRUSpatialAudioMode : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 isEnabled:(BOOL)a1;

@end
