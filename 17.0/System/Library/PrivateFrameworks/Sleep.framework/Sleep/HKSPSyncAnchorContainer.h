@class NSString, NSMutableDictionary;
@protocol HKSPSyncAnchor;

@interface HKSPSyncAnchorContainer : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepScheduleSyncAnchor;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepSettingsSyncAnchor;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepEventRecordSyncAnchor;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepScheduleStateSyncAnchor;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepModeSyncAnchor;
@property (readonly, nonatomic) id<HKSPSyncAnchor> sleepEventSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allKeys;
+ (id)descriptionForKey:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)incrementSleepScheduleStateSyncAnchor;
- (id)lock_getSyncAnchorForKey:(id)a0;
- (void)compareWithContainer:(id)a0 sleepScheduleSyncAnchorOutOfDate:(id /* block */)a1 sleepSettingsSyncAnchorOutOfDate:(id /* block */)a2 sleepEventRecordSyncAnchorOutOfDate:(id /* block */)a3 sleepScheduleStateSyncAnchorOutOfDate:(id /* block */)a4 sleepModeSyncAnchorOutOfDate:(id /* block */)a5 sleepEventSyncAnchorOutOfDate:(id /* block */)a6;
- (void)updateSleepScheduleSyncAnchor:(id)a0;
- (void)updateWithContainer:(id)a0;
- (id)incrementSleepEventRecordSyncAnchor;
- (id)lock_incrementSyncAnchorForKey:(id)a0;
- (void)updateSleepSettingsSyncAnchor:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)lock_setSyncAnchor:(id)a0 forKey:(id)a1;
- (void)updateSyncAnchor:(id)a0 forKey:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)updateSleepEventSyncAnchor:(id)a0;
- (id)syncAnchorForKey:(id)a0;
- (void)forceSetSleepScheduleSyncAnchor:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)lock_syncAnchorForKey:(id)a0;
- (id)incrementSleepModeSyncAnchor;
- (void).cxx_destruct;
- (id)incrementSleepSettingsSyncAnchor;
- (id)incrementSleepEventSyncAnchor;
- (id)incrementSyncAnchorForKey:(id)a0;
- (void)updateSleepEventRecordSyncAnchor:(id)a0;
- (id)succinctDescription;
- (void)updateSleepModeSyncAnchor:(id)a0;
- (id)incrementSleepScheduleSyncAnchor;
- (void)updateSleepScheduleStateSyncAnchor:(id)a0;
- (void)lock_updateSyncAnchor:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)lock_removeSyncAnchorForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
