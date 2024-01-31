@class NSDictionary, IKViewElement;

@interface IKServiceContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) IKViewElement *element;

- (void).cxx_destruct;
- (id)initWithContextDictionary:(id)a0 element:(id)a1;

@end
