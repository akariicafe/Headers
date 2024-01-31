@interface TRIPBRootObject : NSObject <TRIPBMessageSignatureProtocol>

+ (void)initialize;
+ (BOOL)resolveClassMethod:(SEL)a0;
+ (id)extensionRegistry;
+ (void)globallyRegisterExtension:(id)a0;

@end
