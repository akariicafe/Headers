@class PXPhotosLayoutState;

@interface PXPhotosLayoutAnimationContext : NSObject <NSCopying>

@property (retain, nonatomic) PXPhotosLayoutState *fromState;
@property (retain, nonatomic) PXPhotosLayoutState *toState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
