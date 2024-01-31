@class UIFont, NSString, NSAttributedString, NSTextContainer, NSLayoutManager, UITextView, UIButton, UITapGestureRecognizer, NSTextStorage, UIColor;

@interface MUExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    UITextView *_textView;
    UIButton *_showMoreButton;
    UIFont *_showMoreFont;
    NSString *_showMoreText;
    NSString *_showLessText;
    UIFont *_showLessFont;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    BOOL _isPerformingLayout;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (copy) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *showMoreText;
@property (retain, nonatomic) UIFont *showMoreFont;
@property (retain, nonatomic) UIColor *showMoreTextColor;
@property (copy, nonatomic) NSString *showLessText;
@property (retain, nonatomic) UIFont *showLessFont;
@property (retain, nonatomic) UIColor *showLessTextColor;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL allowLessText;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (copy, nonatomic) id /* block */ labelResizedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (id)init;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)infoCardThemeChanged;
- (void)_expand;
- (BOOL)_canShowAllText;
- (BOOL)_canShowLess;
- (BOOL)_isShowingUserExpanded;
- (void)_mkExpandingLabelComonInit;
- (void)_setExpansionMode:(unsigned long long)a0;
- (void)_setTextExclusionPath;
- (id)_showLessTextSeparator;
- (BOOL)isShowingExpanded;

@end
