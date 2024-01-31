@class NSString;
@protocol SXActionProvider, SXActionManager;

@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler>

@property (readonly, nonatomic) id<SXActionProvider> actionProvider;
@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)handleRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionProvider:(id)a0 actionManager:(id)a1;

@end
