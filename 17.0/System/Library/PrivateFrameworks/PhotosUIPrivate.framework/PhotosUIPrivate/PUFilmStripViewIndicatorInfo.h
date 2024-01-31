@class UIColor;

@interface PUFilmStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) double normalizedLocation;
@property (readonly, nonatomic) UIColor *preferredColor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(double)a0 preferredColor:(id)a1;

@end
