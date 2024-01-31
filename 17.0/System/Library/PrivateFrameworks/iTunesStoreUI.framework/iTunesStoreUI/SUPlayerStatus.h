@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying>

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) long long playerState;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
