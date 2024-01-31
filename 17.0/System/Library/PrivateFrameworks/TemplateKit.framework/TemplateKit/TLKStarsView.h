@class UIFont;

@interface TLKStarsView : TLKStackView

@property (nonatomic) double currentStarRating;
@property (nonatomic) double starRating;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL useCompactMode;

- (id)init;
- (void).cxx_destruct;
- (void)updateStarImages;

@end
