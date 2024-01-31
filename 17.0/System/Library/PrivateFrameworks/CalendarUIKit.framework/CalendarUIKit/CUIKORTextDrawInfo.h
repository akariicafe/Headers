@interface CUIKORTextDrawInfo : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) id /* block */ renderingBlock;

- (void).cxx_destruct;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 renderingBlock:(id /* block */)a1;

@end
