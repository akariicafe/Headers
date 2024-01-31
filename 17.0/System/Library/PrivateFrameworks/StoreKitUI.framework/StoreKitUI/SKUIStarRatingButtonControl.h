@class NSMutableArray;
@protocol SKUIStarRatingButtonControlDelegate;

@interface SKUIStarRatingButtonControl : UIView {
    float _value;
}

@property (retain, nonatomic) NSMutableArray *buttons;
@property (weak, nonatomic) id<SKUIStarRatingButtonControlDelegate> delegate;
@property (nonatomic) float value;

- (id)init;
- (void).cxx_destruct;
- (void)_starButtonTapped:(id)a0;
- (void)_updateForButtonIdentifier:(unsigned long long)a0;
- (void)populate;

@end
