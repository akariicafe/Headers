@class UILabel;

@interface OBTextSectionView : UIStackView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_headerFont;
- (id)_contentFont;
- (void)addAccessoryButton:(id)a0;
- (id)initWithHeader:(id)a0 content:(id)a1;

@end
