@class AMSBinaryPromise, NSString, AMSUIBannerAppearance;

@interface AMSUIBannerMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain, nonatomic) AMSUIBannerAppearance *requestAppearance;
@property (retain, nonatomic) AMSUIBannerAppearance *preferredAppearance;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)_titleTextColor;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (id)_messageFontCompatibleWith:(id)a0;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)_titleFontCompatibleWith:(id)a0;

@end
