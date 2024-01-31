@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

@property (retain, nonatomic) UISwitch *toggle;
@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<NTKCFaceDetailToggleCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)init;
- (double)rowHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_switchToggled;

@end
