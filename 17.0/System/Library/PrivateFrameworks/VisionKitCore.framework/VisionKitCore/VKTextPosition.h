@interface VKTextPosition : VKBaseTextPosition

@property (class, readonly, nonatomic) VKTextPosition *zeroPosition;

@property (nonatomic) long long offset;

+ (id)positionWithOffset:(long long)a0;

- (id)summaryDescription;
- (id)initWithOffset:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)positionByAddingOffset:(long long)a0;

@end
