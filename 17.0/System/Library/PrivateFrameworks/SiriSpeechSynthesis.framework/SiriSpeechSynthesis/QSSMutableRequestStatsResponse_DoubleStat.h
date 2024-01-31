@class NSString;

@interface QSSMutableRequestStatsResponse_DoubleStat : QSSRequestStatsResponse_DoubleStat

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double value;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
