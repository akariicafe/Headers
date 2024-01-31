@protocol TFResolver;

@interface SXAdvertisementComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<TFResolver> resolver;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;

@end
