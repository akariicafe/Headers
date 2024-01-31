@class NSString, NSXPCConnection;

@interface TKLocalSEPKey : TKSEPKey {
    NSString *_callerName;
}

@property (retain, nonatomic) id sac;
@property (readonly, nonatomic) NSString *callerName;
@property (readonly, nonatomic) NSXPCConnection *caller;

+ (id)_testing_keybagHandle;
+ (id)protectionForKeyClass:(int)a0;
+ (int)keyClassForProtection:(id)a0;
+ (id)_testing_callerEntitlements;
+ (void)setupKeybagForTesting:(BOOL)a0;
+ (BOOL)isDaytona;
+ (void)set_testing_keybagHandle:(id)a0;
+ (int)keybagHandleForceSystemSession:(BOOL)a0;
+ (void)set_testing_callerEntitlements:(id)a0;
+ (BOOL)isGibraltar;
+ (void)setContextErrorHandler:(id /* block */)a0;
+ (BOOL)hasSEP;

- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 forceSystemSession:(BOOL)a6 error:(id *)a7;
- (void)processAccessGroupsOfACLDictionary:(id)a0 intoGroups:(id)a1 callerGroups:(id)a2;
- (BOOL)callerHasEntitlement:(id)a0 error:(id *)a1;
- (id)parametersWithACMHandle:(id)a0;
- (BOOL)systemKey;
- (id)valueForEntitlement:(id)a0;
- (id)authContextWithError:(id *)a0;
- (struct __SecAccessControl { } *)accessControl;
- (void).cxx_destruct;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 forceSystemSession:(BOOL)a3 error:(id *)a4;
- (BOOL)evaluateRequirementIgnoringAccessGroups:(struct __ACMRequirement { } *)a0;
- (BOOL)error:(id *)a0 withAKSReturn:(int)a1 ACMHandle:(id)a2 AKSOperation:(id)a3 params:(id)a4 message:(id)a5;
- (id)_initWithAuthContext:(id)a0 caller:(id)a1;
- (id)encodedAccessGroups;

@end
