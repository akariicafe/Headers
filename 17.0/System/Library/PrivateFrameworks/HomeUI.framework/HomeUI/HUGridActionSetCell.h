@class NAFuture, UIView, NSArray, HUPieProgressView, HUGridSceneCellLayoutOptions, NSString, HFItem, HUGridActionSetTitleAndDescriptionView, HUIconView;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol> {
    HFItem *_item;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView;
@property (retain, nonatomic) HUPieProgressView *progressView;
@property (retain, nonatomic) NSArray *actionSetCellConstraints;
@property (retain, nonatomic) NAFuture *internalExecuteActionSetFuture;
@property (retain, nonatomic) NAFuture *executeActionSetFuture;
@property (retain, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) HUGridSceneCellLayoutOptions *sceneCellLayoutOptions;
@property (nonatomic) BOOL useDefaultCellBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (void)_updateLabels;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setItem:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (void)_invalidateConstraints;
- (id)initWithCoder:(id)a0;
- (void)_setupActionSetCell;
- (void)_updateLabelsWithTitle:(id)a0 description:(id)a1;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
