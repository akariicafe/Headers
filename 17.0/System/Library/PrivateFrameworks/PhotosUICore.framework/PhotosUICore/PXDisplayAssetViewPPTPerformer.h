@class NSDictionary, NSString, NSObject;
@protocol PXPPTDelegate, PXAnonymousView;

@interface PXDisplayAssetViewPPTPerformer : NSObject

@property (readonly, nonatomic) NSObject<PXAnonymousView> *containerView;
@property (readonly, weak, nonatomic) id<PXPPTDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *testOptions;
@property (readonly, nonatomic) NSString *testName;
@property (readonly, nonatomic) long long testIterations;

- (id)init;
- (void).cxx_destruct;
- (void)_createAssetViewWithConfiguration:(id)a0 resultHandler:(id /* block */)a1;
- (void)_runScrubbingSubtestWithAssetView:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_runSubtestWithName:(id)a0 metrics:(id)a1 configuration:(id)a2 usingBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_runTestUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_tearDownAssetView:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContainerView:(id)a0 delegate:(id)a1 testOptions:(id)a2;
- (void)runLocalizedTitleTestWithConfigurations:(id)a0 completionHandler:(id /* block */)a1;
- (void)runScrubbingTestWithConfigurations:(id)a0 completionHandler:(id /* block */)a1;

@end
