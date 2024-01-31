@class NSArray, NSNumber, NSMutableDictionary;

@interface BLTSectionConfigurationItem : NSObject

@property unsigned long long coordinationType;
@property (nonatomic) BOOL optOutOfAttachmentTransmission;
@property (nonatomic) BOOL alwaysSyncSettings;
@property (retain, nonatomic) NSArray *allowListedSubtypes;
@property (retain, nonatomic) NSArray *denyListedCategories;
@property (retain, nonatomic) NSArray *allowListedCategories;
@property (nonatomic) BOOL alwaysAlert;
@property (nonatomic) BOOL optOutOfWaitForUserIdle;
@property (nonatomic) BOOL applyAllowListToChildSections;
@property (nonatomic) BOOL optOutOfNotificationTuning;
@property (nonatomic) BOOL hasLegacyMapInUserInfo;
@property (nonatomic) BOOL hasLegacyMapInContext;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext;
@property (retain, nonatomic) NSArray *additionalBridgeSectionIDs;
@property (nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) BOOL shouldUsePhoneExpirationDate;
@property (nonatomic) BOOL optOutOfSettingsCoordination;
@property (nonatomic) BOOL overrideAppliesToCoordinationOptOut;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesAttachmentURL;
@property (retain, nonatomic) NSMutableDictionary *denyListedCategoriesWithVersion;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)coordinationTypeWithSubtype:(long long)a0;
- (BOOL)hasDisplayedCriticalBulletins;
- (BOOL)updateCoordinationType:(unsigned long long)a0;

@end
