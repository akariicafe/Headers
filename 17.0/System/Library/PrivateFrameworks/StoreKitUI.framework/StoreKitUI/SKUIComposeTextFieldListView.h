@class UIResponder, NSMutableArray;
@protocol SKUIComposeTextFieldListViewDelegate;

@interface SKUIComposeTextFieldListView : UIView {
    NSMutableArray *_fields;
    BOOL _isValid;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id<SKUIComposeTextFieldListViewDelegate> delegate;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)dealloc;
- (void)reloadData;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateValidity;
- (void)composeTextFieldValidityChanged:(id)a0;
- (id)textForFieldAtIndex:(unsigned long long)a0;

@end
