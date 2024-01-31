@class NSString, NSDictionary, NSMutableDictionary, NSLocale, NSMutableData, SRAssetBundle;

@interface SRResources : NSObject <SRDefaultsManagerDelegate> {
    NSDictionary *_overrides;
    NSLocale *_locale;
    NSMutableDictionary *_options;
    NSMutableData *_feedbackData;
    SRAssetBundle *_liveAssetBundle;
    BOOL _hasUpdates;
}

@property (retain) NSString *experimentNamespaceId;
@property (retain) NSString *experimentId;
@property (retain) NSString *experimentTreatmentId;
@property int experimentDeploymentId;
@property unsigned int experimentVersion;
@property BOOL autoUpdatingLocale;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) BOOL hasUpdates;
@property (copy, nonatomic) id /* block */ parameterUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)refreshTrial;
- (void)setLocale:(id)a0;
- (id)filePathForKey:(id)a0;
- (BOOL)booleanForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (long long)longForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)updateLocale;
- (void)logForTrigger:(id)a0 queryID:(long long)a1;
- (BOOL)booleanForKey:(id)a0 didFailWithError:(id *)a1;
- (double)doubleForKey:(id)a0 didFailWithError:(id *)a1;
- (id)getTTRLogs;
- (id)getTrialExperimentId;
- (id)getTrialNamespaceId;
- (id)getTrialTreatmentId;
- (long long)longForKey:(id)a0 didFailWithError:(id *)a1;
- (id)filePathArrayForKey:(id)a0;
- (id)filePathArrayForKey:(id)a0 didFailWithError:(id *)a1;
- (id)getFeedbackData;
- (void)appendFeedbackData:(id)a0;
- (id)assetPathForContentType:(id)a0 contentName:(id)a1;
- (id)assetPathsForContentType:(id)a0;
- (id)currentExperimentTrialManager;
- (id)defaultAssetPathForContentType:(id)a0 contentName:(id)a1;
- (void)didUpdateDefaults;
- (id)fetchBooleanParameter:(id)a0;
- (id)fetchDoubleParameter:(id)a0;
- (id)fetchFilePathParameter:(id)a0;
- (id)fetchLongParameter:(id)a0;
- (id)fetchParameter:(id)a0 checkForPositive:(BOOL)a1;
- (id)fetchStringParameter:(id)a0;
- (id)filePathForKey:(id)a0 didFailWithError:(id *)a1;
- (int)getTrialExperimentDeploymentId;
- (int)getTrialRolloutDeploymentId;
- (id)getTrialRolloutId;
- (id)initWithClient:(id)a0 locale:(id)a1 options:(id)a2;
- (id)objectForKey:(id)a0 didFailWithError:(id *)a1;
- (id)objectForKey:(id)a0 withType:(long long *)a1 didFailWithError:(id *)a2;
- (id)stringForKey:(id)a0 didFailWithError:(id *)a1;
- (id)updateWithNewOptions:(id)a0;

@end
