@interface NUNISceneUpdateDescription : NSObject

@property (nonatomic) unsigned long long vista;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic, getter=isEarth) BOOL earth;
@property (readonly, nonatomic, getter=isLuna) BOOL luna;

+ (id)descriptionWithVista:(unsigned long long)a0 updateBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithVista:(unsigned long long)a0 updateBlock:(id /* block */)a1;

@end
