@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject

@property (weak, nonatomic) MTKView *target;

- (void)draw;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
