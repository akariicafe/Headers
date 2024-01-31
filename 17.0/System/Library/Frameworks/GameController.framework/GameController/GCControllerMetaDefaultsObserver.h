@class NSUserDefaults;

@interface GCControllerMetaDefaultsObserver : NSObject

@property (readonly, nonatomic) NSUserDefaults *metaDefaults;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
