@class MOApplicationCategoryShieldPolicy, NSSet, MOApplicationSetSettingMetadata, MOApplicationCategoryShieldPolicySettingMetadata, MOWebDomainCategoryShieldPolicy, MOWebDomainCategoryShieldPolicySettingMetadata, MOWebDomainSetSettingMetadata;

@interface MOShieldSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *applicationsMetadata;
@property (class, readonly, nonatomic) MOApplicationCategoryShieldPolicySettingMetadata *applicationCategoriesMetadata;
@property (class, readonly, nonatomic) MOWebDomainSetSettingMetadata *webDomainsMetadata;
@property (class, readonly, nonatomic) MOWebDomainCategoryShieldPolicySettingMetadata *webDomainCategoriesMetadata;

@property (retain, nonatomic) NSSet *applications;
@property (retain, nonatomic) MOApplicationCategoryShieldPolicy *applicationCategories;
@property (retain, nonatomic) NSSet *webDomains;
@property (retain, nonatomic) MOWebDomainCategoryShieldPolicy *webDomainCategories;

+ (id)groupName;

@end
