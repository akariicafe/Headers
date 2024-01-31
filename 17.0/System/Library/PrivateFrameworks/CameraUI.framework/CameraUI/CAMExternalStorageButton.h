@class CAMSlashView, CAMSlashMaskView;

@interface CAMExternalStorageButton : UIButton

@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (readonly, nonatomic) CAMSlashView *_slashView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)_formattedTitleString;
- (void)_updateSlashVisibility:(BOOL)a0 animated:(BOOL)a1;

@end
