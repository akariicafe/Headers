@class PXStateBadgeView, NSString, UIImage, PXDedupingBadgeView, NSDictionary, UIImageView, PXIndexView, PXScoreView, PXTextSymbolView, NSNumber, PXSymbolBadgeView;

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell {
    UIImageView *_imageView;
    PXStateBadgeView *_clusterStateBadgeView;
    PXStateBadgeView *_stateBadgeView;
    PXStateBadgeView *_alternateStateBadgeView;
    PXDedupingBadgeView *_dedupingBadgeView;
    PXTextSymbolView *_sdofOrHDRBadgeView;
    PXTextSymbolView *_favoriteBadgeView;
    PXTextSymbolView *_utilityBadgeView;
    PXTextSymbolView *_blurryBadgeView;
    PXScoreView *_aestheticScoreView;
    PXScoreView *_contentScoreView;
    PXScoreView *_criteriaScoreView;
    PXScoreView *_iconicScoreView;
    PXSymbolBadgeView *_symbolBadgeView;
    PXSymbolBadgeView *_dedupedSymbolBadgeView;
    PXIndexView *_indexView;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSString *representedAssetIdentifier;
@property (retain, nonatomic) NSDictionary *debugInfo;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *alternateState;
@property (retain, nonatomic) NSString *clusterState;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isUtility) BOOL utility;
@property (nonatomic, getter=isBlurry) BOOL blurry;
@property (nonatomic, getter=isSDOFOrHDR, setter=setSDOFOrHDR:) BOOL sdofOrHDR;
@property (nonatomic) double aestheticScore;
@property (nonatomic) double contentScore;
@property (nonatomic) double criteriaScore;
@property (nonatomic) double iconicScore;
@property (retain, nonatomic) NSNumber *symbolIndex;
@property (retain, nonatomic) NSString *dedupingType;
@property (retain, nonatomic) NSNumber *dedupedSymbolIndex;
@property (nonatomic) unsigned long long index;

+ (double)cellHeightWithCellWidth:(double)a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setClusterParity:(unsigned long long)a0;
- (void)setComparisonMatch:(BOOL)a0;

@end
