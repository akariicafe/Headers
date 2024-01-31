@class UIImage, NSString;

@interface DMCEnrollmentTableViewPromotionCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_subtitleFont;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_setupContentConfigurationWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2;
- (double)gapToNextSection;

@end
