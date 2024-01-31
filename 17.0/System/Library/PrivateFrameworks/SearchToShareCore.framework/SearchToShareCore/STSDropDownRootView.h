@class NSMutableArray, UIView;

@interface STSDropDownRootView : UIView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) UIView *contentView;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
