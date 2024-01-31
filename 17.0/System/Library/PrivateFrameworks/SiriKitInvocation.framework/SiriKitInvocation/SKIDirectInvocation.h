@interface SKIDirectInvocation : NSObject

+ (id)wrapCommandInStartLocalRequest:(id)a0;
+ (id)runSiriKitExecutorCommandWithContext:(id)a0 payload:(id)a1;
+ (id)makeParseWithDirectInvocationPayload:(id)a0;
+ (id)runSiriKitExecutorCommandWithContext:(id)a0 parse:(id)a1 appBundleId:(id)a2;

@end
