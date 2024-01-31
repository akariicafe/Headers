@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (id)accessTokenForTagID:(id)a0;
- (void)syncForTagID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (id)webAccessOptedInTagIDs;
- (id)allTagSettingsRecords;
- (id)fontSizeForTagID:(id)a0;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (void).cxx_destruct;
- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (id)authenticatedAccessTokensByTagID;
- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;
- (id)contentScaleForTagID:(id)a0;
- (id)allTagSettingsRecordNames;

@end
