@class UIColor, NSMutableDictionary, NSArray, NSString, CSComplicationManager, UIView, CSComplicationPresentationState;
@protocol CSComplicationContainerViewControllerDelegate;

@interface CSComplicationContainerViewController : CSCoverSheetViewControllerBase <CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding> {
    BOOL _isVisible;
    CSComplicationPresentationState *_lastKnownComplicationPresentationState;
}

@property (retain, nonatomic) CSComplicationManager *complicationManager;
@property (retain, nonatomic) NSMutableDictionary *widgetViewControllersByUniqueIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByUniqueIdentifier;
@property (nonatomic) unsigned long long inlineTextAlignment;
@property (retain, nonatomic) NSArray *widgetDescriptors;
@property (retain, nonatomic) UIColor *tintColor;
@property (weak, nonatomic) id<CSComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isScreenOff) BOOL screenOff;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) UIView *complicationSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentState;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_updatePresentationStyleForTransitionToNewTraitCollection:(id)a0 reason:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)_inlineComplicationDescriptorIfSolo;
- (id)_buildComplicationPresentationStateForTraitCollection:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_layoutModularComplications;
- (void)setVisible:(BOOL)a0;
- (void)_setTextParametersAndFontForWidgetController:(id)a0;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)handleComplicationSelectionGesture:(id)a0;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void)_updatePresentationStyleForReason:(id)a0;
- (void)widgetHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithComplicationManager:(id)a0 inlineTextAlignment:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_backlightLuminanceDidChange:(id)a0 previousTraitCollection:(id)a1;
- (id)_widgetTintParameters;
- (void)_layoutInlineComplication;
- (void)beginCancellingTouches;
- (BOOL)interpretsViewAsContent:(id)a0;
- (id)initWithComplicationManager:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)endCancellingTouches;

@end
