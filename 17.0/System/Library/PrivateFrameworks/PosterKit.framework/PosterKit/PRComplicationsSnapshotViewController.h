@class FBSScene, NSArray, NSString, NSMutableDictionary, UIView, BSUIVibrancyConfiguration;

@interface PRComplicationsSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying> {
    FBSScene *_scene;
    NSMutableDictionary *_widgetViewControllersByUniqueIdentifier;
    UIView *_touchBlockingView;
    long long _layoutStyle;
}

@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isComplicationUserInteractionEnabled) BOOL complicationUserInteractionEnabled;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void).cxx_destruct;
- (void)_updateTintParametersForWidgetHostViewController:(id)a0;
- (void)complicationsDidEndDisplaying;
- (void)complicationsWillDisplay;
- (id)initWithComplicationDescriptors:(id)a0 layoutStyle:(long long)a1;
- (id)initWithScene:(id)a0 complicationLayoutProvider:(id)a1;

@end
