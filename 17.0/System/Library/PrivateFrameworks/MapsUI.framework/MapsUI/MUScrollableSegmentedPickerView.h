@class NSArray, NSString, NSLayoutConstraint, MUScrollableSegmentedPickerContentView;
@protocol MUScrollableSegmentedPickerViewDelegate;

@interface MUScrollableSegmentedPickerView : MUPassthroughView <MUScrollableSegmentedPickerContentViewDelegate> {
    MUScrollableSegmentedPickerContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
}

@property (copy, nonatomic) NSArray *viewModels;
@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) id<MUScrollableSegmentedPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupContentView;
- (void)segmentedPickerContentViewDidUpdateSelection:(id)a0;

@end
