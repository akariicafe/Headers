@class NSSet, MOApplicationSetSettingMetadata, MOBoolSettingMetadata, NSNumber;

@interface MOApplicationSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *blockedApplicationsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAppInstallationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAppRemovalMetadata;
@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *unremovableApplicationsMetadata;

@property (retain, nonatomic) NSSet *blockedApplications;
@property (retain, nonatomic) NSNumber *denyAppInstallation;
@property (retain, nonatomic) NSNumber *denyAppRemoval;
@property (retain, nonatomic) NSSet *unremovableApplications;

+ (id)groupName;

@end
