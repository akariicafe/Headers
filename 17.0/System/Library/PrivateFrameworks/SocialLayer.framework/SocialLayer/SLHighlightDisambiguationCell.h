@class SLHighlightDisambiguationPillView, SLAttribution;

@interface SLHighlightDisambiguationCell : UICollectionViewCell

@property (retain, nonatomic) SLHighlightDisambiguationPillView *expandedAttributionView;
@property (readonly, nonatomic) SLAttribution *attribution;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithAttribution:(id)a0;

@end
