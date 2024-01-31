@class NSString, AMSUIAccountMessageAppearance, AMSBinaryPromise;

@interface AMSUIAccountMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (nonatomic) BOOL didAnimateFirstImpression;
@property (retain, nonatomic) AMSUIAccountMessageAppearance *requestAppearance;
@property (retain, nonatomic) AMSUIAccountMessageAppearance *preferredAppearance;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)_titleTextColor;
- (void)_commitAnimationLaunch;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (long long)_impressionAnimationStyle;
- (id)_messageFontCompatibleWith:(id)a0;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (void)_prepareAnimationLaunch;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)_titleFontCompatibleWith:(id)a0;

@end
