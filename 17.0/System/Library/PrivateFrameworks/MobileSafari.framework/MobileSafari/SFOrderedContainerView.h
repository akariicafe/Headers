@protocol SFOrderedContainerViewDelegate;

@interface SFOrderedContainerView : UIView {
    BOOL _settingOrderedSubviews;
}

@property (weak, nonatomic) id<SFOrderedContainerViewDelegate> delegate;

- (void)willMoveToWindow:(id)a0;
- (void)didAddSubview:(id)a0;
- (void)_sf_setOrderedSubviews:(id *)a0 count:(unsigned long long)a1;
- (void)updateOrderedSubviews:(id *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;

@end
