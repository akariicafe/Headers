@class NSString, UIFont, NSLayoutConstraint;

@interface PREditingFontPickerCellView : PREditingPickerCellView

@property (retain, nonatomic) NSLayoutConstraint *widthCellConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightCellConstraint;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) UIFont *contentFont;
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing;

+ (Class)fontPickerCellViewClassForRole:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultCellSizeUsingSmallerSizing:(BOOL)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)_refreshHeightConstraint;
- (void)_refreshWidthConstraint;
- (void)configureWithAttributedString:(id)a0;
- (void)configureWithFont:(id)a0 text:(id)a1;

@end
