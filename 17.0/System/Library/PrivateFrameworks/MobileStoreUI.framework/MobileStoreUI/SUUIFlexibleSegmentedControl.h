@class NSArray, NSString, UISegmentedControl;
@protocol SUUIFlexibleSegmentedControlDelegate;

@interface SUUIFlexibleSegmentedControl : UIView {
    BOOL _isMoreListSelected;
    long long _previousSelectedSegmentIndex;
    UISegmentedControl *_segmentedControl;
}

@property (nonatomic) BOOL sizesSegmentsToFitWidth;
@property (weak, nonatomic) id<SUUIFlexibleSegmentedControlDelegate> delegate;
@property (nonatomic) double desiredSegmentWidth;
@property (copy, nonatomic) NSArray *itemTitles;
@property (nonatomic) long long maximumNumberOfVisibleItems;
@property (readonly, nonatomic) long long moreListIndex;
@property (copy, nonatomic) NSString *moreListTitle;
@property (nonatomic) long long selectedSegmentIndex;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setTitles:(id)a0 forSegmentedControl:(id)a1;
- (void)_configureSegmentedControl:(id)a0 withTitles:(id)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (void)_valueChangeAction:(id)a0;
- (void)cancelMoreList;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithIndex:(long long)a0;

@end
