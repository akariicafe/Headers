@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate;

+ (void)performWithoutAnimationWhileHiddenInWindow:(id)a0 actions:(id /* block */)a1;
+ (void)initialize;
+ (void)setAnimationsPermitted:(BOOL)a0 inWindow:(id)a1;
+ (id)_sharedOpenApplicationOptions;
+ (id)_sharedOpenAppService;
+ (BOOL)areAnimationsPermittedInWindow:(id)a0;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApplication:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissModule;
- (void)dismissControlCenter;
- (id)initWithModuleIdentifier:(id)a0;
- (void)requestExpandModule;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setHomeGestureDismissalAllowed:(BOOL)a0;
- (void)openApplication:(id)a0 completionHandler:(id /* block */)a1;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForOrientation:(long long)a0;
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)a0;
- (void)requestLayoutSizeUpdate;
- (void)enqueueStatusUpdate:(id)a0;

@end
