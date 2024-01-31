@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

+ (id)requiredUserInfoPropertiesForModelKind:(id)a0;

- (float)progress;
- (BOOL)hasItemsWaitingWithoutPauseReason;
- (id)_infoForContainer:(id)a0;
- (float)progressForContainer:(id)a0;
- (unsigned long long)status;
- (void)setOverStorageLimitBehavior:(unsigned long long)a0 forContainer:(id)a1;
- (unsigned long long)_persistingOptions;
- (id)_infoForItem:(id)a0;
- (void)setProgressBytes:(unsigned long long)a0 totalBytes:(unsigned long long)a1 forItem:(id)a2;
- (void)setUserInfoForModelObject:(id)a0 manuallyPinned:(BOOL)a1;
- (unsigned long long)downloadPauseReason;
- (void)setUserInfo:(id)a0 forItem:(id)a1;
- (void)_updateAggregateInfoIfNeeded;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (void)setUserInfo:(id)a0 forContainer:(id)a1;
- (void)synchronize;
- (void)setStatus:(unsigned long long)a0 forItem:(id)a1;
- (void)_writeInfo;
- (id)initWithTarget:(unsigned long long)a0;
- (id)_info;
- (BOOL)hasItemsOverStorageLimit;
- (void)setOverStorageLimit:(BOOL)a0 forItem:(id)a1;
- (void)setItems:(id)a0 forContainer:(id)a1;
- (unsigned long long)statusForContainer:(id)a0;
- (unsigned long long)downloadPauseReasonForContainer:(id)a0;
- (unsigned long long)playabilityForContainer:(id)a0;
- (void)_notifyInfoChanged;
- (void)setDownloadPauseReason:(unsigned long long)a0 forItem:(id)a1;

@end
