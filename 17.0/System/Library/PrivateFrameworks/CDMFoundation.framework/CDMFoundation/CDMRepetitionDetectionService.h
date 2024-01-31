@class QueryRewriter;

@interface CDMRepetitionDetectionService : CDMDAGBaseService

@property (retain, nonatomic) QueryRewriter *repetitionDetector;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)doInference:(id)a0 status:(id *)a1;
- (id)getPredictor:(id)a0 FilesPath:(id)a1 status:(id *)a2;
- (id)handleRequestCommandTypeNames;

@end
