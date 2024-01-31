@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (void)setSelected:(BOOL)a0;
- (id)cellBackgroundImage;
- (void)updateBackground:(id)a0 color:(id)a1;
- (void)updateColors;

@end
