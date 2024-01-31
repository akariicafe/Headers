@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

@property (readonly, nonatomic) long long appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;

+ (BOOL)shouldShowEditingIntroduction;

- (id)buttonTitle;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)animatedTutorialViewNamed:(id)a0 ofType:(id)a1 needsFrame:(BOOL)a2;
- (void)extraButtonTapAction;
- (id)mediaContents;
- (double)pagingInterval;
- (BOOL)presentsFullScreen;
- (id)textBodyDescriptions;
- (id)textBodyFont;
- (id)textTitleDescriptions;

@end
