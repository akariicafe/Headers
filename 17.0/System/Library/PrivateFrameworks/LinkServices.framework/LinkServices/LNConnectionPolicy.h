@interface LNConnectionPolicy : NSObject

+ (BOOL)_typeExistsWithMangledTypeName:(id)a0;
+ (id)policyWithActionMetadata:(id)a0;
+ (id)policyWithActionMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (id)policyWithActionMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithBundleIdentifier:(id)a0;
+ (id)policyWithEntityMetadata:(id)a0;
+ (id)policyWithEntityMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (id)policyWithEntityMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithEntityQueryMetadata:(id)a0;
+ (id)policyWithEntityQueryMetadata:(id)a0 signals:(id)a1;
+ (id)policyWithQueryMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;
+ (BOOL)shouldExecuteActionOnApplicationWithActionMetadata:(id)a0 reason:(id *)a1;
+ (BOOL)shouldExecuteActionOnApplicationWithBundleIdentifier:(id)a0;
+ (BOOL)shouldHandleInProcessWithMangledTypeName:(id)a0 bundleIdentifier:(id)a1;

@end
