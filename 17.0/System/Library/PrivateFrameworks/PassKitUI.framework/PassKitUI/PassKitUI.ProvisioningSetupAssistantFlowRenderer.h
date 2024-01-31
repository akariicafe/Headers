@interface PassKitUI.ProvisioningSetupAssistantFlowRenderer : _TtCs12_SwiftObject <PKUIFlowManagerRenderer> {
    void /* unknown type, empty encoding */ onFirstViewControllerShown;
    void /* unknown type, empty encoding */ initialViewController;
    void /* unknown type, empty encoding */ navController;
    void /* unknown type, empty encoding */ existingViewControllers;
    void /* unknown type, empty encoding */ currentViewControllers;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ flowDelegate;

- (id)rootViewController;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)createChildRenderer;
- (void)dismissWithViewController:(id)a0 animated:(BOOL)a1;
- (id)navViewControllers;
- (void)presentWithViewController:(id)a0 animated:(BOOL)a1;
- (void)pushWithViewController:(id)a0 animated:(BOOL)a1;

@end
