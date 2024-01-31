@class NSDate, NSString, UIView, UIButton, NSTimeZone, PLGlyphControl, UILabel, NCToggleControl;
@protocol NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryExpandedHeaderViewDelegate, BSUIDateLabel;

@interface NCNotificationSummaryExpandedHeaderView : NCNotificationListBaseContentView <BSUIDateLabelDelegate, NCToggleControlDelegate, NCNotificationListCoalescingControlsHandler> {
    UILabel<BSUIDateLabel> *_timeStampLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_dividerView;
    UIButton *_onboardingAcceptButton;
    UIButton *_onboardingRejectButton;
    PLGlyphControl *_collapseControl;
    NCToggleControl *_clearControl;
    UIView *_controlsView;
    BOOL _animateCollapseButtonLayout;
}

@property (weak, nonatomic) id<NCNotificationSummaryExpandedHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic, getter=isOnboarding) BOOL onboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;

- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_layoutTitleLabel;
- (void)_handleClearControlPrimaryAction:(id)a0;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)a0;
- (void)_updateTextAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void).cxx_destruct;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)a0;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (void)_handleClearAll:(id)a0;
- (void)_handleClearControlTouchUpInside:(id)a0;
- (void)dateLabelDidChange:(id)a0;
- (BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_updateTextAttributesForDateLabel;
- (void)toggleControlDidBeginClickInteraction:(id)a0;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_allowedWidthForButtonInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureControlsViewIfNecessary;
- (void)_configureDividerViewIfNecessary;
- (void)_configureOnboardingButtonsIfNecessary;
- (void)_configureTimeStampLabel;
- (void)_configureTimeStampLabelIfNecessary;
- (void)_handleCollapseControlPrimaryAction:(id)a0;
- (void)_layoutControlsView;
- (void)_layoutDividerView;
- (void)_layoutOnboardingButtons;
- (void)_layoutSubtitleLabel;
- (void)_layoutTimeStampLabel;
- (unsigned long long)_maximumNumberOfLinesForTitleText;
- (id)_newOnboardingButtonWithTitle:(id)a0;
- (unsigned long long)_numberOfLinesForSubtitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForTitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_recycleTimeStampLabel;
- (void)_summaryOnboardingAccepted:(id)a0;
- (void)_summaryOnboardingRejected:(id)a0;
- (void)_tearDownTimeStampLabel;
- (void)_updateTextAttributesForButtonLabel:(id)a0;
- (void)_updateTextAttributesForSubtitleTextLabel;
- (void)_updateTextAttributesForTitleTextLabel;

@end
