@class UIStackView, NSArray, UIImageView, UILabel, ATXProactiveSuggestion, MTVisualStylingProvider;
@protocol APUISuggestionsWidgetViewDelegate;

@interface APUISuggestionView : UIView {
    MTVisualStylingProvider *_reasonStylingProvider;
}

@property (nonatomic) unsigned long long platterSize;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *appImageView;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion;
@property (nonatomic) BOOL canEngageSuggestion;
@property (weak, nonatomic) id<APUISuggestionsWidgetViewDelegate> delegate;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setAppImageViewWithBundleIdentifier:(id)a0;
- (void)_setAppImageViewWithImage:(id)a0;
- (void)_setINImage:(id)a0 withBundleID:(id)a1;
- (int)_subtitleNumberOfLines;
- (int)_titleNumberOfLines;
- (void)_updateMaximumNumberOfLines;
- (void)_updateReasonStylingProvider;
- (void)createViewsIfNeeded;
- (void)installReasonLabelIfNecessary;
- (void)layoutSuggestion:(id)a0;
- (void)setINImage:(id)a0 withBundleID:(id)a1;
- (void)setLNImage:(id)a0 withBundleID:(id)a1;

@end
