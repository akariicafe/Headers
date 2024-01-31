@interface ATXFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL isContextualEngineEnabled;
@property (class, readonly, nonatomic) BOOL isTimelineEnabled;
@property (class, readonly, nonatomic) BOOL isZKWHideContextsEnabled;
@property (class, readonly, nonatomic) BOOL isSportsEnabled;
@property (class, readonly, nonatomic) BOOL isFocusUserSetupPredictionEnabled;
@property (class, readonly, nonatomic) BOOL isDigitalBalanceEnabled;

@end
