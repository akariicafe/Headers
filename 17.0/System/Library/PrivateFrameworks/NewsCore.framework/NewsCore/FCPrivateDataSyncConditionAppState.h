@interface FCPrivateDataSyncConditionAppState : NSObject <FCPrivateDataSyncCondition>

@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;

- (id)description;
- (id)_appState;

@end
