@class AMSUIBubbleTipInlineAnchorInfo, NSString, AMSUIBubbleTipAppearance, AMSBinaryPromise;

@interface AMSUIBubbleTipViewController : AMSUIBaseMessageViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController>

@property (retain, nonatomic) AMSUIBubbleTipAppearance *requestAppearance;
@property (nonatomic) BOOL isSelfSizing;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (retain, nonatomic) AMSUIBubbleTipAppearance *preferredAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithRequest:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_titleTextColor;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (void)_endObservations;
- (long long)_iconAnimationPlayCount;
- (id)_messageFontCompatibleWith:(id)a0;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (void)_startObservations;
- (id)_titleFontCompatibleWith:(id)a0;
- (void)_updateArrowProperties;
- (void)_updateSelfSizedContentSize;
- (void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)a0;
- (unsigned long long)directionForAMSUIPopoverArrowDirection:(unsigned long long)a0;

@end
