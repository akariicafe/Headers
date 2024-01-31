@protocol TSCH3DSharegroupDelayCheckerParent;

@interface TSCH3DSharegroupDelayChecker : NSObject {
    id<TSCH3DSharegroupDelayCheckerParent> _parent;
}

@property (nonatomic) BOOL condition;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)invalidateCondition;
- (void)p_cancelCheckCondition;
- (void)p_checkCondition;
- (void)p_scheduleCheckConditionOnMainThread;
- (void)scheduleCheckCondition;

@end
