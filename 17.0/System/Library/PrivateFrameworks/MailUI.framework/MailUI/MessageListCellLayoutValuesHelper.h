@class UIBackgroundConfiguration, MessageListCellLayoutValues, UIColor, UITraitCollection;

@interface MessageListCellLayoutValuesHelper : NSObject {
    UIBackgroundConfiguration *_defaultBackgroundConfiguration;
}

@property (retain, nonatomic) MessageListCellLayoutValues *defaultLayoutValues;
@property (retain, nonatomic) MessageListCellLayoutValues *expandedLayoutValues;
@property (retain, nonatomic) MessageListCellLayoutValues *topHitsLayoutValues;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) UIBackgroundConfiguration *defaultBackgroundConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL supportsPopover;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } systemLayoutMargins;
@property (nonatomic) BOOL inMultiSelectionMode;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (double)dynamicRowHeightWithSummary:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutValuesForStyle:(long long)a0;
- (void)updateTintColorFromView:(id)a0;

@end
