@interface BodyPoint : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) float score;

- (id)init;
- (void)dealloc;

@end
