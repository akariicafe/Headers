@class PLXPCListenerOperatorComposition, PLService;

@interface PLDuetServiceLpmSource : NSObject

@property (weak) PLService *duetService;
@property (retain) PLXPCListenerOperatorComposition *lpmEnabledXPCListener;
@property (retain) PLXPCListenerOperatorComposition *lpmDisabledXPCListener;

+ (id)entryEventForwardDefinitionLpmSourceInformation;

- (id)init;
- (void).cxx_destruct;
- (void)stopService;
- (void)didReceiveLpmSourceInfoWithPayload:(id)a0 withFlag:(short)a1;
- (void)initOperatorDependanciesLpmSource:(id)a0;

@end
