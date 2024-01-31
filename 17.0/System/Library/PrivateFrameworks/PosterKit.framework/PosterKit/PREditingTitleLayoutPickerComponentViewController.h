@class PREditingPickerCellView, NSArray, UIStackView;
@protocol PREditingTitleLayoutPickerComponentViewControllerDelegate;

@interface PREditingTitleLayoutPickerComponentViewController : UIViewController

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PREditingPickerCellView *selectedCellView;
@property (copy, nonatomic) NSArray *cellViews;
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing;
@property (nonatomic) double largestItemHeight;
@property (copy, nonatomic) NSArray *heightCellConstraints;
@property (readonly, copy, nonatomic) NSArray *titleLayouts;
@property (nonatomic) unsigned long long selectedTitleLayout;
@property (weak, nonatomic) id<PREditingTitleLayoutPickerComponentViewControllerDelegate> delegate;

+ (id)defaultTitleLayoutsForRole:(id)a0;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (double)estimatedHeight;
- (double)cellHeight;
- (id)cellViewFor:(unsigned long long)a0 largestItemHeight:(double *)a1;
- (id)initWithTitleLayouts:(id)a0 selectedLayout:(unsigned long long)a1;
- (BOOL)isUsingVerticalLanguage;
- (void)updateLayoutForCurrentSize;

@end
