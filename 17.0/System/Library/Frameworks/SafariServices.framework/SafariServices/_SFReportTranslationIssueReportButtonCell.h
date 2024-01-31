@class NSString, UIButton;
@protocol _SFReportTranslationIssueReportButtonCellDelegate;

@interface _SFReportTranslationIssueReportButtonCell : UICollectionViewCell

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (weak, nonatomic) id<_SFReportTranslationIssueReportButtonCellDelegate> delegate;
@property (retain, nonatomic) UIButton *button;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_reportTranslationIssue:(id)a0;
- (void)setBackgroundColorForEnabledState:(BOOL)a0;

@end
