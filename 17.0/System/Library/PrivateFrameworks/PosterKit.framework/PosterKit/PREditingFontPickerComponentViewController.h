@class NSLocale, NSString, NSArray, PREditingFontPickerItem, UISlider, NSLayoutConstraint, PREditingFontPickerCellView;
@protocol PREditingFontPickerComponentViewControllerDelegate;

@interface PREditingFontPickerComponentViewController : UIViewController

@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) PREditingFontPickerCellView *selectedCellView;
@property (copy, nonatomic) NSArray *cellViews;
@property (nonatomic) double largestItemHeight;
@property (retain, nonatomic) UISlider *fontWeightSlider;
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing;
@property (nonatomic) double configuredViewWidth;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSArray *widthCellConstraints;
@property (copy, nonatomic) NSArray *heightCellConstraints;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (readonly, copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSLocale *locale;
@property (weak, nonatomic) id<PREditingFontPickerComponentViewControllerDelegate> delegate;
@property (retain, nonatomic) PREditingFontPickerItem *selectedItem;
@property (nonatomic) double fontWeight;

+ (id)defaultFontIdentifiersForRole:(id)a0 titleString:(id)a1;
+ (id)defaultItemsForRole:(id)a0 titleString:(id)a1;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (BOOL)_shouldShowWeightSlider;
- (void)_updateWeightSliderVisibility;
- (id)configureFontPickerViewIfNecessary;
- (id)contentStringForFont:(id)a0;
- (id)contentStringNumberFormatter;
- (void)filterFontViewsByLocale;
- (void)fontSliderDidUpdateWeight:(id)a0;
- (id)initWithItems:(id)a0 selectedItem:(id)a1 role:(id)a2 titleString:(id)a3;
- (void)updateLayoutForCurrentSize;

@end
