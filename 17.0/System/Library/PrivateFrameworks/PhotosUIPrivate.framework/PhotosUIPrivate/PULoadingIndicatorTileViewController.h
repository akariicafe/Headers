@class PUProgressIndicatorView;

@interface PULoadingIndicatorTileViewController : PUTileViewController

@property (retain, nonatomic) PUProgressIndicatorView *indicatorView;
@property (nonatomic) long long style;

+ (id)_createIndicatorViewForStyle:(long long)a0;
+ (void)_destroyIndicatorView:(id)a0;
+ (struct CGSize { double x0; double x1; })loadingIndicatorTileSizeForStyle:(long long)a0;

- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)becomeReusable;
- (void).cxx_destruct;

@end
