@class NTKComplicationDisplayWrapperView, NSString, NTKComplicationController, CLKDevice, CLKComplicationBackgroundDescriptor, NTKComplication, NTKComplicationStyle, NTKComplicationVariant, NTKMonochromeModel, CHSWidgetDescriptor;
@protocol NTKComplicationViewControllerDelegate;

@interface NTKComplicationViewController : UIViewController <NTKComplicationDisplayWrapperViewBackgroundObserver, NTKWidgetDescriptorProviderObserver> {
    NTKComplicationController *_controller;
    NTKComplicationDisplayWrapperView *_wrapperView;
    NTKMonochromeModel *_monochromeModel;
    CHSWidgetDescriptor *_widgetDescriptor;
}

@property (copy, nonatomic) NTKComplication *complication;
@property (readonly, copy, nonatomic) NTKComplicationVariant *variant;
@property (readonly, nonatomic) CLKDevice *device;
@property (copy, nonatomic) NTKComplicationStyle *style;
@property (nonatomic) BOOL showSnapshot;
@property (nonatomic) BOOL tapEnabled;
@property (readonly, nonatomic) CLKComplicationBackgroundDescriptor *backgroundDescriptor;
@property (weak, nonatomic) id<NTKComplicationViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long presentationState;
@property (nonatomic) BOOL forceLivePresentationState;
@property (nonatomic) unsigned long long visibility;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL showsWhenLocked;
@property (nonatomic) BOOL showsInLowLuminance;
@property (copy, nonatomic) NSString *launchLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_contentTransform;
- (void)_applyPresentationState;
- (void)_applyStyleIfPossible;
- (void)_applyStyleToDisplay:(id)a0;
- (void)_applyVisibility;
- (id)_effectiveMetrics;
- (void)_recreateDisplayIfNecessary;
- (void)_updateController;
- (void)_updateControllerDataMode;
- (void)_updatePresentationState;
- (void)_updateWidgetDescriptorForComplication:(id)a0 withProvider:(id)a1;
- (void)displayWrapperTemplateBackgroundChanged;
- (id)initWithVariant:(id)a0 device:(id)a1 complication:(id)a2;
- (id)initWithVariant:(id)a0 device:(id)a1 widgetComplication:(id)a2 widgetConfigurationIdentifier:(id)a3;
- (void)performTapAction;

@end
