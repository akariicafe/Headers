@class UIView, NSString, NSArray, BSUIVibrancyEffectView, NSDictionary, CSComplicationManager, BSUIVibrancyConfiguration, PRWidgetGridViewController, CSComplicationPresentationState;
@protocol CSWidgetGridViewControllerDelegate;

@interface CSWidgetGridViewController : CSCoverSheetViewControllerBase <PRWidgetGridViewControllerDelegate> {
    BOOL _isVisible;
    CSComplicationPresentationState *_lastKnownComplicationPresentationState;
}

@property (retain, nonatomic) BSUIVibrancyEffectView *vibrancyEffectView;
@property (retain, nonatomic) CSComplicationManager *complicationManager;
@property (retain, nonatomic) PRWidgetGridViewController *widgetGridViewController;
@property (weak, nonatomic) id<CSWidgetGridViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (nonatomic, getter=isScreenOff) BOOL screenOff;
@property (retain, nonatomic) NSDictionary *iconLayout;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) UIView *widgetGridContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentState;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setVisible:(BOOL)a0;
- (void)handleComplicationSelectionGesture:(id)a0;
- (void)_updatePresentationStyleForReason:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_backlightLuminanceDidChange:(id)a0 previousTraitCollection:(id)a1;
- (id)_widgetTintParameters;
- (BOOL)interpretsViewAsContent:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithComplicationManager:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)containsIconsInRow:(unsigned long long)a0;
- (void)widgetGridViewController:(id)a0 didRequestLaunchForComplicationDescriptor:(id)a1 withAction:(id)a2;
- (id)_buildComplicationPresentationStateForTraitCollection:(id)a0 interfaceOrientation:(long long)a1;
- (void)_updateComplicationPresentationState:(id)a0 reason:(id)a1;
- (void)_updateGridViewControllerOccluded:(BOOL)a0;
- (void)_updatePresentationStyleForNewOrientation:(long long)a0;

@end
