@interface IKDOMFeatureFactory : NSObject

+ (void)initialize;
+ (void)registerClass:(Class)a0 forFeatureName:(id)a1;
+ (id)featureForName:(id)a0 withDOMNode:(id)a1;

@end
