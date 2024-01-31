@class UISelectionFeedbackGenerator, NSString, UIAction, NSArray, UIView, UILabel;
@protocol HACCContentModuleDelegate;

@interface HUICCFooterView : UIView <HACCContentModule, MTVisualStylingRequiring>

@property (copy, nonatomic) UIAction *footerAction;
@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (id)accessibilityLabel;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)enabled;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (id)initWithModule:(unsigned long long)a0;
- (void)updateValue;
- (void)_openSettingsWithURL:(id)a0;
- (id)contentValue;
- (void)footerTapped:(id)a0;
- (void)setupFooterActionIfNecessary;

@end
