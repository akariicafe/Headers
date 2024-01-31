@interface AAPersonaUtility : NSObject

+ (id)findEnterprisePersonaIdentifier;
+ (BOOL)isDataSeparatedAccount:(id)a0;
+ (BOOL)personaConsistencyCheck:(id)a0;
+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;

@end
