@interface _ANESandboxingHelper : NSObject

+ (void)initialize;
+ (BOOL)canAccessPathAt:(id)a0 methodName:(id)a1 error:(id *)a2;
+ (BOOL)releaseSandboxExtension:(id)a0 handle:(long long)a1;
+ (long long)consumeSandboxExtension:(id)a0 forModel:(id)a1 error:(id *)a2;
+ (id)issueSandboxExtensionForModel:(id)a0 error:(id *)a1;
+ (id)sandboxExtensionPathForModelURL:(id)a0;

@end
