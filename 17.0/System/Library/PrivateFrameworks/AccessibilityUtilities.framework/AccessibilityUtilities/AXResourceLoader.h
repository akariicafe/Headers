@interface AXResourceLoader : NSObject

+ (void)_path:(id *)a0 bundleID:(id *)a1 forRescource:(unsigned long long)a2;
+ (id)loadImageWithIdentifier:(id)a0 orPath:(id)a1 principalClass:(Class *)a2 error:(id *)a3;
+ (id)loadResource:(unsigned long long)a0 principalClass:(Class *)a1 error:(id *)a2;

@end
