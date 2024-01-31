@class UIColor, UIFont, NSString, UIViewController;

@interface PRIncomingCallTextViewAdapter : NSObject <PRPosterAppearanceObserving> {
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ hostingController;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic) BOOL statusIsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) unsigned long long preferredAlignment;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *emphasizedNameFont;
@property (nonatomic, retain) UIFont *secondaryNameFont;
@property (nonatomic, retain) UIFont *statusFont;
@property (nonatomic, copy) NSString *displayNameText;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) unsigned long long layout;
@property (nonatomic, readonly) BOOL displayNameIsSuitableForVerticalLayout;
@property (nonatomic, readonly) BOOL statusIsSuitableForVerticalLayout;
@property (nonatomic) BOOL marqueeRunning;
@property (nonatomic, readonly) BOOL multilineNameIsDisplayed;
@property (nonatomic, readonly) BOOL callIsActive;

- (void)posterAppearanceDidChange:(id)a0;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFitsIn:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContact:(id)a0 status:(id)a1 callIsActive:(BOOL)a2;
- (id)initWithName:(id)a0 status:(id)a1 callIsActive:(BOOL)a2;
- (void)overrideTitleLayoutWith:(unsigned long long)a0;
- (void)removeTitleLayoutOverride;
- (void)setTextFontUsingDefaultFontSizes:(id)a0;
- (void)transitionCallToActiveStateAnimated:(BOOL)a0;

@end
