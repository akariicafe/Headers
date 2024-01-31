@class CALayer, NSString;

@interface CAStateControllerAnimation : NSObject

@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSString *key;

- (void)dealloc;
- (id)initWithLayer:(id)a0 key:(id)a1;

@end
