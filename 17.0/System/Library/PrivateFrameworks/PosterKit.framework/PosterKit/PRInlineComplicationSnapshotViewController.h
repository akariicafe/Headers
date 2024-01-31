@class FBSScene, NSString, PRComplicationDescriptor, UIView, CHUISWidgetHostViewController, BSUIVibrancyConfiguration;

@interface PRInlineComplicationSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying> {
    FBSScene *_scene;
    CHUISWidgetHostViewController *_hostViewController;
    UIView *_touchBlockingView;
}

@property (retain, nonatomic) PRComplicationDescriptor *complicationDescriptor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isComplicationUserInteractionEnabled) BOOL complicationUserInteractionEnabled;

- (void)viewDidLoad;
- (void)invalidate;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)initWithComplicationDescriptor:(id)a0;
- (void)complicationsDidEndDisplaying;
- (void)complicationsWillDisplay;
- (id)initWithScene:(id)a0 complicationLayoutProvider:(id)a1;

@end
