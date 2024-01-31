@class NSString;
@protocol SXActionManager, SXViewControllerPresenting, SXSubscribeActionHandler;

@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXSubscribeActionHandler> handler;
@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenting;
@property (readonly, weak, nonatomic) id<SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (id)initWithHandler:(id)a0 viewControllerPresenting:(id)a1 actionManager:(id)a2;

@end
