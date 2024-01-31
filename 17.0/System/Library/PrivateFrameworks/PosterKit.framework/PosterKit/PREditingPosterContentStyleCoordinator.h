@class UIImageView, UIView;
@protocol _PREditingPosterContentStyleCoordinatorImpl, PRPosterContentStyle;

@interface PREditingPosterContentStyleCoordinator : NSObject {
    UIImageView *_symbolImageView;
    id<_PREditingPosterContentStyleCoordinatorImpl> _coordinatorImpl;
}

@property (readonly, nonatomic) id<PRPosterContentStyle> style;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (nonatomic) double variation;
@property (nonatomic) double contentsLuminance;
@property (readonly, nonatomic) double itemViewLuminance;
@property (readonly, nonatomic) UIView *itemView;
@property (readonly, nonatomic) UIView *variationSliderThumbView;
@property (readonly, nonatomic) UIView *variationSliderTrackView;

+ (id)_legibleIconColorForLuminance:(double)a0;
+ (id)coordinatorForColorWellView:(id)a0 vibrant:(BOOL)a1;
+ (id)coordinatorImplForStyle:(id)a0;

- (void).cxx_destruct;
- (id)initWithInitialStyle:(id)a0 suggested:(BOOL)a1;
- (id)initWithInitialStyle:(id)a0 suggested:(BOOL)a1 coordinator:(id)a2;

@end
