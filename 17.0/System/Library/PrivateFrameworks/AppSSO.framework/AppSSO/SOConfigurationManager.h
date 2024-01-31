@interface SOConfigurationManager : NSObject

+ (id)defaultManager;

- (id)init;
- (void)saveConfigurationData:(id)a0 completion:(id /* block */)a1;

@end
