@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)init;
- (Class)classForCompilingModelType:(int)a0;
- (id)classesForLoadingModelType:(int)a0;
- (id)loadNeuralNetworkClasses:(BOOL)a0 trainWithMLCompute:(BOOL)a1;
- (id)classesForLoadingModelType:(int)a0 configuration:(id)a1 isUpdatable:(BOOL)a2 isEncrypted:(BOOL)a3;

@end
