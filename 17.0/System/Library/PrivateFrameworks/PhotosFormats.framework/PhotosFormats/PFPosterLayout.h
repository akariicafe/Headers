@class PFPosterOrientedLayout;

@interface PFPosterLayout : NSObject

@property (readonly, nonatomic) PFPosterOrientedLayout *portraitLayout;
@property (readonly, nonatomic) PFPosterOrientedLayout *landscapeLayout;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) BOOL supportsBothOrientations;
@property (readonly, nonatomic) BOOL isUsingHeadroom;

+ (id)layoutWithDictionaryRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPortraitLayout:(id)a0 landscapeLayout:(id)a1;
- (id)layoutByUpdatingConfiguration:(id)a0;
- (id)layoutByUpdatingNormalizedPortraitVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 landscapeVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)layoutByUpgradingToConfiguration:(id)a0;

@end
