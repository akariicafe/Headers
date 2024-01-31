@class NSString, NSXPCConnection, _LTTranslationServer, NSUUID;
@protocol _LTClientConnectionDelegate;

@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSXPCConnection *_connection;
    _LTTranslationServer *_server;
    BOOL _trusted;
    NSString *_trustedClientIdentifier;
    NSUUID *_speechSessionID;
}

@property (weak, nonatomic) id<_LTClientConnectionDelegate> delegate;

- (void)clearCaches;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)installedLocales:(id /* block */)a0;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
- (void)_updateHotfix:(id /* block */)a0;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (void)onDeviceModeEnabled:(id /* block */)a0;
- (void)cleanupOnDisconnect;
- (void)provideFeedback:(id)a0 withContext:(id)a1;
- (void)logWithRequestData:(id)a0;
- (void)selfLoggingEventWithData:(id)a0;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (void)startInstallRequest:(id)a0;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)cleanup;
- (void)_purgeAllAssets:(id /* block */)a0;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)textStreamingConfigurationWithCompletion:(id /* block */)a0;
- (void)_updateAllAssets:(id /* block */)a0;
- (id)_clientDelegate;
- (void)translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_getAssetSize:(id /* block */)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_deleteHotfix:(id /* block */)a0;
- (void)logRequestOfType:(id)a0 context:(id)a1;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)a0;
- (void)endAudio;
- (void)languageAssetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addSpeechAudioData:(id)a0;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)a0;
- (id)initWithConnection:(id)a0 server:(id)a1 trusted:(BOOL)a2;
- (void)assetRequestHandler:(id)a0;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;

@end
