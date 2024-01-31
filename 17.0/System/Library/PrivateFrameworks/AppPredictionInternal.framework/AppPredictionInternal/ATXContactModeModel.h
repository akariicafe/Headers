@class ATXModeAffinityModelsConstants, NSSet, MLModel, ATXContactNotificationEngagementEventProvider;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXContactModeModel : NSObject {
    unsigned long long _mode;
    MLModel *_contactModeModel;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    ATXModeAffinityModelsConstants *_modeAffinityModelsConstants;
}

- (id)modelName;
- (id)meContact;
- (id)init;
- (id)initWithMode:(unsigned long long)a0;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (id)scoredEntities;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toContactSpecificFeatures:(id)a1;
- (id)featuresToModel:(id)a0;
- (id)loadContactModeModel;
- (id)purgeDeletedContacts:(id)a0;
- (double)scoreFromContactFeatures:(id)a0;

@end
