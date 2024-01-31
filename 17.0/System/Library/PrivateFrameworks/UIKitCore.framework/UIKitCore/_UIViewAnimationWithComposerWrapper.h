@protocol UIViewAnimationComposing, UIIntervalAnimating;

@interface _UIViewAnimationWithComposerWrapper : NSObject

@property (retain, nonatomic) id<UIIntervalAnimating> animation;
@property (retain, nonatomic) id<UIViewAnimationComposing> composer;

+ (id)instanceWithAnimation:(id)a0 composer:(id)a1;

- (void).cxx_destruct;

@end
