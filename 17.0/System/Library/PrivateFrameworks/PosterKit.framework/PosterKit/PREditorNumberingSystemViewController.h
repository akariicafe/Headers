@class UIFont, NSArray, NSDictionary, PREditingPickerLabeledCellView, NSString, NSLayoutConstraint, NSLocale;
@protocol PREditorNumberingSystemViewControllerDelegate;

@interface PREditorNumberingSystemViewController : UIViewController

@property (retain, nonatomic) NSDictionary *numberSystemImages;
@property (retain, nonatomic) NSArray *cellViews;
@property (retain, nonatomic) PREditingPickerLabeledCellView *selectedCellView;
@property (copy, nonatomic) NSString *selectedNumberingSystem;
@property (nonatomic) double largestItemHeight;
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing;
@property (nonatomic) double configuredViewWidth;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (copy, nonatomic) NSArray *widthCellConstraints;
@property (copy, nonatomic) NSArray *heightCellConstraints;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (retain, nonatomic) UIFont *font;
@property (weak, nonatomic) id<PREditorNumberingSystemViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSLocale *displayLocale;

+ (id)systemNumberingSystem;
+ (id)allNumberingSystems;
+ (id)displayFontForFont:(id)a0;
+ (id)displayNameForNumberingSystem:(id)a0;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (id)baseContentStringForLocale:(id)a0;
- (id)contentStringForFont:(id)a0 locale:(id)a1;
- (void)didSelectNumberingSystem:(id)a0;
- (id)displayFont;
- (id)initWithSelectedNumberingSystem:(id)a0 selectedFont:(id)a1;
- (id)localeWithNumberingSystem:(id)a0;
- (void)updateLayoutForCurrentSize;

@end
