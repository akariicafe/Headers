@class NSString, BLTPreviouslySentMessageStore, BLTSettingsSendSerializerPassthrough;
@protocol BLTSettingSyncingClient;

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingsSendSerializerDelegate, BLTSettingSyncing, BLTRemoteGlobalSettingsSyncServerRemoteEndpoint> {
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
}

@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore;
@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property (weak, nonatomic) id<BLTSettingSyncingClient> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateGlobalSettings:(id)a0;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;
- (void)clearSectionInfoSentCache;
- (void)handleFileURL:(id)a0 extraMetadata:(id)a1;
- (void)handleRemoveSectionRequest:(id)a0;
- (void)handleSetNotificationsAlertLevelRequest:(id)a0;
- (void)handleSetNotificationsCriticalAlertRequest:(id)a0;
- (void)handleSetNotificationsGroupingRequest:(id)a0;
- (void)handleSetNotificationsSoundRequest:(id)a0;
- (void)handleSetRemoteGlobalSettingsRequest:(id)a0;
- (void)handleSetRemoteGlobalSpokenSettingEnabledRequest:(id)a0;
- (void)handleSetSectionInfoRequest:(id)a0;
- (void)handleSetSectionInfoResponse:(id)a0;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)a0;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)a0;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)registerProtobufHandlers;
- (void)remoteGlobalSettingsSyncServer:(id)a0 sendChangeset:(id)a1;
- (void)removeSectionInfoSentCacheForSectionID:(id)a0;
- (void)removeSectionWithSectionID:(id)a0;
- (void)removeSectionWithSectionID:(id)a0 sent:(id /* block */)a1;
- (void)sendRemoteGlobalSpokenSettingEnabled:(BOOL)a0 date:(id)a1;
- (void)sendSpooledRequestsNowWithSent:(id /* block */)a0 withAcknowledgement:(id /* block */)a1;
- (void)setNotificationsCriticalAlertEnabled:(int)a0 sectionID:(id)a1;
- (void)setNotificationsGrouping:(int)a0 sectionID:(id)a1;
- (void)setNotificationsGrouping:(int)a0 sectionID:(id)a1 spoolToFile:(BOOL)a2;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2 spoolToFile:(BOOL)a3;
- (void)setNotificationsSoundEnabled:(int)a0 sectionID:(id)a1;
- (void)setSectionInfo:(id)a0 completion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 withSent:(id /* block */)a1 withAcknowledgement:(id /* block */)a2 keypaths:(id)a3 spoolToFile:(BOOL)a4;
- (void)setSectionSubtypeParametersIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2;
- (void)setSectionSubtypeParametersIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2 withQueue:(id)a3 withSent:(id /* block */)a4 withAcknowledgement:(id /* block */)a5 spoolToFile:(BOOL)a6;

@end
