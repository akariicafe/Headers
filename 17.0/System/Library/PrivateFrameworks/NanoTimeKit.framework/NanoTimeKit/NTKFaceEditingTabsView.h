@class NSArray, NSMutableArray, UIView;

@interface NTKFaceEditingTabsView : UIView {
    NSMutableArray *_labels;
    UIView *_labelContainer;
}

@property (retain, nonatomic) NSArray *orderedTabs;
@property (nonatomic) unsigned long long selectedTab;

+ (id)labelFont;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_addOrRemoveLabelsAsNeeded;
- (void)_applyOrderedTabsAndLayout;
- (void)_applySelectedTab:(unsigned long long)a0;
- (double)_containerOffsetForLabelAtIndex:(long long)a0;
- (void)applyTransitionFraction:(double)a0 fromTab:(unsigned long long)a1 toTab:(unsigned long long)a2;

@end
