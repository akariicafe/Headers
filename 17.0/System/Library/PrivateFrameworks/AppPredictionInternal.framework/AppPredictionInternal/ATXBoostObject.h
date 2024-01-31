@interface ATXBoostObject : NSObject

@property (readonly, nonatomic) double workBoost;
@property (readonly, nonatomic) double workScale;
@property (readonly, nonatomic) double homeBoost;
@property (readonly, nonatomic) double homeScale;
@property (readonly, nonatomic) double gymBoost;
@property (readonly, nonatomic) double gymScale;
@property (readonly, nonatomic) double schoolBoost;
@property (readonly, nonatomic) double schoolScale;

- (id)initWithDictionary:(id)a0;

@end
