@class UIView;

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController

@property BOOL hasBeenDisplayed;
@property (retain) UIView *contentView;

+ (void)dismissForever;
+ (long long)viewCount;
+ (BOOL)needsDisplay;
+ (void)updateViewCountToCount:(long long)a0;

- (void).cxx_destruct;
- (id)initWithDomains:(id)a0 explanationText:(id)a1 learnMoreText:(id)a2 continueButtonTitle:(id)a3;
- (void)updateViewCount;
- (double)idealContentHeight;

@end
