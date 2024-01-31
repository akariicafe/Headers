@interface FCPrivateDataSyncConditionStorefront : NSObject <FCPrivateDataSyncCondition>

@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;

- (id)description;

@end
