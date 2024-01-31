@class NSString, TPKTipContentTableViewCell;

@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell <SUSSoftwareUpdateCellProtocol>

@property (nonatomic) int state;
@property (retain, nonatomic) TPKTipContentTableViewCell *tipkitCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)a0;

@end
