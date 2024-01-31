@class NSMutableDictionary, NSDictionary, _CDInteractionStore, NSDate, _PSKNNModelConfiguration, NSURL;

@interface _PSInteractionPredictor : NSObject

@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) NSDictionary *currentClusterDictionary;
@property (retain, nonatomic) NSDate *currentArchiveDate;
@property (retain, nonatomic) NSMutableDictionary *conversationIDMap;
@property (retain, nonatomic) _PSKNNModelConfiguration *modelConfiguration;
@property (retain, nonatomic) NSURL *compiledModelURL;

+ (id)getModelURLfromName:(id)a0;
+ (id)loadModelFromUrl:(id)a0;
+ (id)getIntermediateModelURLForModelName:(id)a0;
+ (id)clustersArchiveFileForDate:(id)a0 modelName:(id)a1;
+ (void)deleteArchiveFiles;
+ (BOOL)removeMlmodelcFolderAtPath:(id)a0;
+ (id)defaultClustersArchiveDirectory;
+ (BOOL)cloneAdaptableModelURL:(id)a0 toFilePathURL:(id)a1;
+ (void)deleteArchiveFileAtDate:(id)a0 modelName:(id)a1;

- (id)getTrainArrayToDate:(id)a0 withStartDateAnchor:(id)a1;
- (id)getDateNumDays:(int)a0 AfterDate:(id)a1;
- (id)getClusteringResultsForPoint:(id)a0 usingClusterDictionary:(id)a1;
- (void)trainAtDate:(id)a0 usingCompiledModelURL:(id)a1 andSaveToURL:(id)a2;
- (void)writeArchive:(id)a0 toFilePath:(id)a1;
- (id)convertLogToClusterPointArray:(id)a0;
- (id)getClusterDictionaryFromTrainArray:(id)a0 usingDBSCANParamsMinPts:(int)a1 andEps:(double)a2;
- (id)getConversationIDLogFromTrainArray:(id)a0;
- (id)initWithInteractionStore:(id)a0 atDate:(id)a1 withModelName:(id)a2 modelConfiguration:(id)a3;
- (id)getRecencyResultsShowingNumValues:(int)a0 fromTrainArray:(id)a1;
- (id)predictAtDate:(id)a0 usingModelAtURL:(id)a1 showNumSuggestions:(int)a2;
- (id)getLastContactedDictionaryFromTrainArray:(id)a0;
- (void).cxx_destruct;
- (id)rankedZkwSuggestionsFromPredictionArray:(id)a0 forBundleID:(id)a1;
- (id)getOrMakeClusterDictionaryAtDate:(id)a0;
- (id)getDictionaryFromClustersArchiveAtPath:(id)a0;
- (double)timeSinceLastContactTo:(id)a0 FromDate:(id)a1 inTrainArray:(id)a2;
- (void)printModelWeights:(id)a0;
- (id)findLatestArchiveDateBefore:(id)a0 modelName:(id)a1;
- (double)getMinDistanceForPt:(id)a0 toClusters:(id)a1;
- (id)getConversationIDFromInteraction:(id)a0;
- (id)createMLArrayProviderFromTrainArray:(id)a0;
- (void)writeClusterArchiveFromClusterDict:(id)a0 withDate:(id)a1;

@end
