@class UIColor, UIFont, NSString, PRIncomingCallTextViewAdapter;

@interface PRIncomingCallTextViewAdapterWrapper : NSObject <PRPosterAppearanceObserving> {
    PRIncomingCallTextViewAdapter *adapter;
}

@property (nonatomic) BOOL statusDeterminesWritingMode;
@property (nonatomic, getter=statusLabelIsHidden) BOOL statusLabelHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) unsigned long long preferredAlignment;
@property (nonatomic) unsigned long long preferredLayout;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *emphasizedNameFont;
@property (copy, nonatomic) UIFont *secondaryNameFont;
@property (copy, nonatomic) UIFont *statusFont;
@property (copy, nonatomic) NSString *displayNameText;
@property (copy, nonatomic) NSString *statusText;
@property (nonatomic, getter=isMarqueeRunning) BOOL marqueeRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)idealTitleFontSizeForText:(id)a0 usingLayout:(unsigned long long)a1;

- (id)viewController;
- (id)titleText;
- (void)setTitleText:(id)a0;
- (unsigned long long)alignment;
- (id)captionText;
- (void)setTitleColor:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)layout;
- (void)setTitleFont:(id)a0;
- (id)initWithGivenName:(id)a0 familyName:(id)a1;
- (void)posterAppearanceDidChange:(id)a0;
- (BOOL)captionIsHidden;
- (void)setCaptionText:(id)a0;
- (void)setStatusLabel:(BOOL)a0;
- (void)setCaptionFont:(id)a0;
- (BOOL)callIsActive;
- (BOOL)captionDeterminesWritingMode;
- (BOOL)captionIsSuitableForVerticalLayout;
- (BOOL)displayNameIsSuitableForVerticalLayout;
- (id)initWithContact:(id)a0 status:(id)a1 callIsActive:(BOOL)a2;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 status:(id)a2;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 status:(id)a2 callIsActive:(BOOL)a3;
- (id)initWithName:(id)a0 status:(id)a1;
- (id)initWithName:(id)a0 status:(id)a1 callIsActive:(BOOL)a2;
- (BOOL)multilineNameIsDisplayed;
- (void)overrideTitleLayoutWith:(unsigned long long)a0;
- (void)removeTitleLayoutOverride;
- (void)setCaptionDeterminesWritingMode:(BOOL)a0;
- (void)setCaptionLabelIsHidden:(BOOL)a0;
- (void)setTextFontUsingDefaultFontSizes:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsInSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)statusIsHidden;
- (BOOL)statusIsSuitableForVerticalLayout;
- (BOOL)titleIsSuitableForVerticalLayout;
- (void)transitionCallToActiveStateAnimated:(BOOL)a0;

@end
