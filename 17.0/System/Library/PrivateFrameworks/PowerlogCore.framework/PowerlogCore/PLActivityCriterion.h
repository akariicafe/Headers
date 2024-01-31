@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

@property (nonatomic) BOOL satisfied;
@property (weak) id<PLActivityCriterionDelegate> delegate;

- (id)init;
- (void)didDisableActivity:(id)a0;
- (void)didInterruptActivity:(id)a0;
- (void)didEnableActivity:(id)a0;
- (void).cxx_destruct;
- (void)didCompleteActivity:(id)a0;

@end
