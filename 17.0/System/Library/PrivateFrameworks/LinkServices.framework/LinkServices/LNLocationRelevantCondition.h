@class CLRegion;

@interface LNLocationRelevantCondition : LNRelevantCondition

@property (readonly, copy, nonatomic) CLRegion *region;

- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;

@end
