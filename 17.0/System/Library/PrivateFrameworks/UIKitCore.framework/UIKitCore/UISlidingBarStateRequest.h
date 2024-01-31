@interface UISlidingBarStateRequest : NSObject <NSCopying>

@property (nonatomic) BOOL userInitiated;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic) double rubberBandInset;
@property (nonatomic) double mainWidth;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (id)_closestState:(id)a0 returningDistance:(double *)a1;
- (id)_closestEqualOrLargerState:(id)a0 returningDistance:(double *)a1;
- (id)_closestEqualOrLargerState:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_matchingState:(id)a0;
- (id)_closestState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
