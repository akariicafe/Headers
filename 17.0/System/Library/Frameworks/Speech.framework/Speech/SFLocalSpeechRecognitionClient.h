@class NSString, NSXPCConnection, NSError, NSObject;
@protocol SFLocalSpeechRecognitionDelegate, OS_dispatch_queue;

@interface SFLocalSpeechRecognitionClient : NSObject <SFLSRDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_lsrConnection;
    NSError *_connectionUnavailableError;
    id /* block */ _downloadProgress;
    id /* block */ _downloadCompletion;
    BOOL _recognitionActive;
}

@property (readonly, weak, nonatomic) id<SFLocalSpeechRecognitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)cleanupCacheWithCompletion:(id /* block */)a0;
+ (void)logCoreAnalyticsEvent:(id)a0 withAnalytics:(id)a1;

- (id)init;
- (void)dealloc;
- (void)stopSpeech;
- (void)invalidate;
- (void)addAudioPacket:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cancelSpeech;
- (void)addProns:(id)a0 forWord:(id)a1 completion:(id /* block */)a2;
- (void)addSentenceToNgramCounts:(id)a0;
- (void)addSentenceToNgramCounts:(id)a0 completion:(id /* block */)a1;
- (void)appLmNeedsRebuild:(id)a0 language:(id)a1 sandboxExtensions:(id)a2 completion:(id /* block */)a3;
- (void)configParametersForVoicemailWithLanguage:(id)a0 clientID:(id)a1 completion:(id /* block */)a2;
- (void)createNgramCountsArtifactFromPhraseCountArtifact:(id)a0 writeToDirectory:(id)a1 sandboxExtensions:(id)a2 completion:(id /* block */)a3;
- (void)createPhraseCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeToDirectory:(id)a3 sandboxExtensions:(id)a4 completion:(id /* block */)a5;
- (void)deserializeNgramCountsData:(id)a0 completion:(id /* block */)a1;
- (void)downloadAssetsForLanguage:(id)a0 clientID:(id)a1 urgent:(BOOL)a2 forceUpgrade:(BOOL)a3 detailedProgress:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)downloadAssetsForLanguage:(id)a0 clientID:(id)a1 urgent:(BOOL)a2 forceUpgrade:(BOOL)a3 progress:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)fetchAssetsForLanguage:(id)a0 clientID:(id)a1 completion:(id /* block */)a2;
- (void)generateNgramCountsSerializeDataWithCompletion:(id /* block */)a0;
- (void)initializeLmWithAssetPath:(id)a0 completion:(id /* block */)a1;
- (void)initializeLmWithLocale:(id)a0 clientID:(id)a1 completion:(id /* block */)a2;
- (void)initializeWithSandboxExtensions:(id)a0;
- (void)installedLanguagesWithSynchronousConnection:(BOOL)a0 completion:(id /* block */)a1;
- (void)lmeThresholdWithCompletion:(id /* block */)a0;
- (oneway void)localSpeechRecognitionDidDownloadAssetsWithProgress:(unsigned long long)a0 isStalled:(BOOL)a1;
- (oneway void)localSpeechRecognitionDidFail:(id)a0;
- (oneway void)localSpeechRecognitionDidFinishDownloadingAssets:(id)a0 error:(id)a1;
- (oneway void)localSpeechRecognitionDidFinishRecognition:(id)a0;
- (oneway void)localSpeechRecognitionDidProcessAudioDuration:(double)a0;
- (oneway void)localSpeechRecognitionDidRecognizePartialResult:(id)a0 rawPartialResult:(id)a1;
- (oneway void)localSpeechRecognitionDidSucceed;
- (void)metricsWithCompletion:(id /* block */)a0;
- (void)oovWordsAndFrequenciesWithCompletion:(id /* block */)a0;
- (void)preloadRecognizerForLanguage:(id)a0 task:(id)a1 clientID:(id)a2 recognitionOverrides:(id)a3 modelOverrideURL:(id)a4 completion:(id /* block */)a5;
- (void)promoteAssets;
- (void)purgeAssetsForLanguage:(id)a0 clientID:(id)a1 completion:(id /* block */)a2;
- (void)setAssetsAsProvisional;
- (void)setAssetsPurgeability:(BOOL)a0 forLanguages:(id)a1 clientID:(id)a2 completion:(id /* block */)a3;
- (void)startRecordedAudioDictationWithParameters:(id)a0;
- (void)trainAppLmFromNgramCountsArtifact:(id)a0 forApp:(id)a1 language:(id)a2 writeToDirectory:(id)a3 sandboxExtensions:(id)a4 completion:(id /* block */)a5;
- (void)trainAppLmFromNgramsSerializedData:(id)a0 customPronsData:(id)a1 language:(id)a2 writeToDirectory:(id)a3 sandboxExtension:(id)a4 completion:(id /* block */)a5;
- (void)trainFromPlainTextAndWriteToDirectory:(id)a0 sandboxExtension:(id)a1 completion:(id /* block */)a2;
- (void)wakeUpWithCompletion:(id /* block */)a0;

@end
