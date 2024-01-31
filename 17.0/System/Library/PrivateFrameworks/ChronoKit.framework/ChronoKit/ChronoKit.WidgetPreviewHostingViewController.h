@class CHSInlineTextParameters;

@interface ChronoKit.WidgetPreviewHostingViewController : ChronoKit.PreviewHostingViewController {
    void /* unknown type, empty encoding */ viewCollection;
    void /* unknown type, empty encoding */ usesIOSLockScreenVibrancyEffect;
    void /* unknown type, empty encoding */ isLuminanceReduced;
    void /* unknown type, empty encoding */ autoupdatingPreviewView;
    void /* unknown type, empty encoding */ entryController;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ tintParameters;
@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
