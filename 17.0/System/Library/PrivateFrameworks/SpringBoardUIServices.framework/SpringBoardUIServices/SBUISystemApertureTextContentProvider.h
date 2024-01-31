@class UIColor, NSString, SBUISystemApertureLabel, UIView, NSAttributedString;
@protocol SBUISystemApertureContentViewContaining;

@interface SBUISystemApertureTextContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling> {
    SBUISystemApertureLabel *_label;
    unsigned long long _textSwapTransitionCount;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long numberOfLines;
@property (readonly, nonatomic) UIView *providedView;
@property (weak, nonatomic) id<SBUISystemApertureContentViewContaining> contentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *contentColor;

+ (id)_textColorForTextStyle:(long long)a0;

- (void).cxx_destruct;
- (void)setFontWeight:(double)a0;
- (id)_initWithText:(id)a0 attributedText:(id)a1 style:(long long)a2;
- (id)initWithAttributedText:(id)a0 style:(long long)a1;
- (id)initWithText:(id)a0 style:(long long)a1;
- (void)swapInText:(id)a0 textColor:(id)a1;
- (void)swapInText:(id)a0 textColor:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2;

@end
