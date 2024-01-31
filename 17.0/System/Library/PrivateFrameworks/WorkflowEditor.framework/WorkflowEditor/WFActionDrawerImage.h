@class WFImage;

@interface WFActionDrawerImage : NSObject

@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL shouldAspectFill;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 shouldAspectFill:(BOOL)a1;

@end
