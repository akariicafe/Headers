@class UIActivityIndicatorView;

@interface CKTranscriptHeaderCell : CKTranscriptCell

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;

+ (double)defaultCellHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startAnimatingActivityIndicator;
- (void)_stopLoadingIndicatorAnimatingIfNeeded;
- (void)layoutSubviewsForAlignmentContents;

@end
