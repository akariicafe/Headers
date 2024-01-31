@class NSString, UIView;
@protocol SAStrokeVisualResponse;

@interface SearchUIStrokeAnimationCardSectionView : SearchUICardSectionView <SAStrokeAnimatingDelegate>

@property (readonly) UIView<SAStrokeVisualResponse> *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;
- (void)animationDidStart;

@end
