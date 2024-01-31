@class NSDate, NSString, NSAttributedString, UIImage, UIView, UITapGestureRecognizer, NSArray, UIAction, MTVisualStylingProvider, NSTimeZone, UIImageConfiguration, NCNotificationSeamlessContentView;
@protocol NCExpandedPlatterViewDelegate;

@interface NCExpandedPlatterView : PLExpandedPlatterView <UIGestureRecognizerDelegate, PLContentSizeCategoryAdjusting, NCNotificationSeamlessContentViewDelegate, NCNotificationStaticContentAccepting> {
    NCNotificationSeamlessContentView *_notificationContentView;
}

@property (weak, nonatomic) id<NCExpandedPlatterViewDelegate> delegate;
@property (nonatomic) BOOL hidesNotificationContent;
@property (readonly, nonatomic) UITapGestureRecognizer *defaultTapGestureRecognizer;
@property (nonatomic, getter=isScrollViewPinnedToBottom) BOOL scrollViewPinnedToBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) UIImage *prominentIcon;
@property (copy, nonatomic) UIImage *subordinateIcon;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) BOOL screenCaptureProhibited;
@property (copy, nonatomic) UIView *prominentIconView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summaryText;
@property (copy, nonatomic) NSString *importantText;
@property (copy, nonatomic) NSAttributedString *importantAttributedText;
@property (readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property (retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property (copy, nonatomic) UIAction *inlineAction;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSArray *menuActions;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;

- (void)_layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_configureNotificationContentViewIfNecessary;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_layoutNotificationContentView;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })_contentViewSize;
- (void)_configureDefaultTapGestureRecognizerIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentViewFrame;
- (BOOL)_tapGestureRecognizerShouldReceiveTouch:(id)a0;
- (void)notificationSeamlessContentView:(id)a0 requestsInteractionWithURL:(id)a1;

@end
