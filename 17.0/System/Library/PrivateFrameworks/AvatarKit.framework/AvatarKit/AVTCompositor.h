@class NSArray, NSMutableSet;

@interface AVTCompositor : NSObject {
    NSMutableSet *_textureProviders;
}

@property (class, readonly, nonatomic) NSArray *propertyNames;

- (void)addClient:(id)a0;
- (id)init;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (void)componentDidChangeForTypes:(unsigned long long)a0;
- (void)configureMaterial:(id)a0 propertyNamed:(id)a1 memoji:(id)a2;
- (void)skinColorDidChange;

@end
