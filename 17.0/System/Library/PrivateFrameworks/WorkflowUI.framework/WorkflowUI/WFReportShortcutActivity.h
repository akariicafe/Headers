@class NSString, UIViewController;

@interface WFReportShortcutActivity : UIActivity {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ reportSubmitted;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reportShortcutHostingViewController;
}

@property (class, nonatomic, readonly) NSString *activityType;

@property (nonatomic, weak) void /* unknown type, empty encoding */ activityControler;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) BOOL _isDisabled;
@property (nonatomic, readonly) UIViewController *activityViewController;

- (id)init;
- (void).cxx_destruct;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithWorkflow:(id)a0 completion:(id /* block */)a1;

@end
