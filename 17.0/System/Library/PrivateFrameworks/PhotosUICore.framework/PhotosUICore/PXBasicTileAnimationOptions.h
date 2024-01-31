@interface PXBasicTileAnimationOptions : NSObject <NSCopying>

@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) long long style;
@property (nonatomic) BOOL shouldNotifyTiles;
@property (nonatomic) BOOL shouldSnapshotDynamicContents;
@property (nonatomic) unsigned long long flags;

+ (id)defaultAnimationOptions;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
