@class UIColor, NSString, UIView;
@protocol _UISignalViewImplementation;

@interface _UICellularSignalView : UIView <_UISignalView> {
    UIView<_UISignalViewImplementation> *_signalView;
}

@property (nonatomic) long long sizeCategory;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long signalMode;
@property (copy, nonatomic) UIColor *inactiveColor;
@property (copy, nonatomic) UIColor *activeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSizeCategory:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
