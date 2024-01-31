@class NSArray;

@interface RemindersUICore.TTRListAppearanceGridView : UIView {
    void /* unknown type, empty encoding */ preferredMaxLayoutWidth;
    void /* unknown type, empty encoding */ horizontalMargins;
    void /* unknown type, empty encoding */ topMargin;
    void /* unknown type, empty encoding */ arrangedSubviews;
    void /* unknown type, empty encoding */ verticalGap;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) void /* unknown type, empty encoding */ badgeSize;
@property (nonatomic) void /* unknown type, empty encoding */ minimumGap;
@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
