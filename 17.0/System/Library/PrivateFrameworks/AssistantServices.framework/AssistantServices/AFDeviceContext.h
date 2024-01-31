@class AFMediaPlaybackStateSnapshot, NSMutableDictionary, AFClockAlarmSnapshot, AFLocationSnapshot, AFPeerInfo, AFCallStateSnapshot, AFSystemStateSnapshot, AFMultiUserStateSnapshot, NSString, AFDeviceContextMetadata, AFHomeAnnouncementSnapshot, AFClockTimerSnapshot, NSData, NSUUID;

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_serializedBackingStore;
    long long _dirtyFlags;
    NSString *_cachedDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDescriptionLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFClockAlarmSnapshot *alarmSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *alarmSnapshotMetadata;
@property (readonly, nonatomic) AFClockTimerSnapshot *timerSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *timerSnapshotMetadata;
@property (readonly, nonatomic) AFMediaPlaybackStateSnapshot *playbackStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *playbackStateMetadata;
@property (readonly, nonatomic) AFHomeAnnouncementSnapshot *homeAnnouncementSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *homeAnnouncementSnapshotMetadata;
@property (readonly, nonatomic) long long heardVoiceTrigger;
@property (readonly, nonatomic) AFDeviceContextMetadata *heardVoiceTriggerMetadata;
@property (readonly, nonatomic) NSData *myriadAdvertisementContext;
@property (readonly, nonatomic) AFMultiUserStateSnapshot *multiUserStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *multiUserStateMetadata;
@property (readonly, nonatomic) AFLocationSnapshot *locationSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *locationMetadata;
@property (readonly, nonatomic) AFCallStateSnapshot *callStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *callStateMetadata;
@property (readonly, nonatomic) AFSystemStateSnapshot *systemStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *systemStateMetadata;
@property (readonly, nonatomic) unsigned long long siriClientState;
@property (readonly, nonatomic) AFDeviceContextMetadata *siriClientStateMetadata;
@property (readonly, nonatomic) BOOL fromLocalDevice;
@property (readonly, nonatomic) NSString *contextCollectorSource;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) AFPeerInfo *deviceInfo;
@property (readonly, nonatomic) long long privacyClass;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)serializedBackingStore;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)af_serviceDeviceContextForKeys:(id)a0;
- (id)_safeContextDictionary;
- (id)_serializedBackingStoreIncludingKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (BOOL)af_didHearVoiceTrigger;
- (id)af_serviceDeviceContextForKeys:(id)a0 excludeContextExpiredBefore:(id)a1 proximity:(long long)a2;
- (id)af_validFlowContext;
- (id)allContextKeys;
- (id)buildBuiltInContextsDescriptions;
- (id)buildDescription;
- (id)contextMetadataForKey:(id)a0;
- (id)deviceContextForDeviceContextKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (id)historicalContextMetadataForKey:(id)a0;
- (id)historicalSiriClientStateMetadata;
- (id)historicalSiriClientStates;
- (id)initWithSerializedBackingStore:(id)a0 fromLocalDevice:(BOOL)a1 contextCollectorSource:(id)a2;
- (id)partialSerializedBackingStoreIncludingKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (id)partiallyUpdatedContextForDeviceContextKeys:(id)a0 excludingMandatoryKeys:(id)a1 fromDeviceContext:(id)a2;
- (id)serializedContextForKey:(id)a0;
- (id)serializedHistoricalContextForKey:(id)a0;
- (id)updatedContextWithSerializedContextByKey:(id)a0 metadata:(id)a1;

@end
