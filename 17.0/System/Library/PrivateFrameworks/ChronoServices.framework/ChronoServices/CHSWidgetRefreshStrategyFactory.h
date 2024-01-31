@protocol CHSWidgetRefreshStrategy;

@interface CHSWidgetRefreshStrategyFactory : NSObject

@property (class, readonly, nonatomic) id<CHSWidgetRefreshStrategy> defaultStrategy;

+ (id)rateLimitedWithPolicyIdentifier:(id)a0;

@end
