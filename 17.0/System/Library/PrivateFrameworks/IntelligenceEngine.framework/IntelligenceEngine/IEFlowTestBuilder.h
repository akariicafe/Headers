@interface IEFlowTestBuilder : NSObject

@property (nonatomic) struct TestCaseBuilder { struct shared_ptr<siri::intelligence::TestCaseBuilder::Impl> { struct Impl *__ptr_; struct __shared_weak_count *__cntrl_; } mImpl; } mBuilder;

- (void)clear;
- (int)count;
- (id).cxx_construct;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)switchActivity:(id)a0;
- (BOOL)addToTestFile:(id)a0 flowId:(id)a1 testName:(id)a2 description:(id)a3;
- (BOOL)addToTestFile:(id)a0 testName:(id)a1 description:(id)a2;
- (void)assertResponseAllIds:(id)a0;
- (void)assertResponseAnyId:(id)a0;
- (void)gotoResponse:(id)a0;
- (void)setVariable:(id)a0 value:(id)a1;

@end
