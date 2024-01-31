@class NSDictionary, VUIRouterDataSource, IKViewElement;

@interface VUIViewElementDataSource : NSObject

@property (copy, nonatomic) NSDictionary *dataDictionary;
@property (retain, nonatomic) VUIRouterDataSource *routerDataSource;
@property (weak, nonatomic) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)initWithDataDictionary:(id)a0 viewElement:(id)a1;

@end
