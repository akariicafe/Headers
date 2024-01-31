@class NSString, NSDictionary, PXStateBadgeView, UILabel;

@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_agentAndStageLabel;
    UILabel *_reasonLabel;
}

@property (retain, nonatomic) NSDictionary *sectionInfo;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *agentAndStage;
@property (retain, nonatomic) NSString *reason;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
