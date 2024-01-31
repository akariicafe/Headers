@interface SFDomainAssociationUtilities : NSObject

+ (id)domainByStrippingSubdomainWildcardPrefixIfNecessary:(id)a0;
+ (BOOL)domainIsProhibitedForSavingCredentials:(id)a0;
+ (BOOL)highLevelDomainHasSuiteOfAssociatedApps:(id)a0;

@end
