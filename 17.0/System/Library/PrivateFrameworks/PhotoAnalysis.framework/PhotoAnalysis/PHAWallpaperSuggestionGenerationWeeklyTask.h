@class NSDictionary, NSString;

@interface PHAWallpaperSuggestionGenerationWeeklyTask : NSObject <PHASuggestionGenerationTask> {
    unsigned long long _generationOptions;
    unsigned long long _generatedContent;
}

@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generationOptionNameFromSingleOption:(unsigned long long)a0;
+ (void)sendWallpaperGenerationCompletedBiomeEvent:(id)a0;

- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (void).cxx_destruct;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)baseSuggestionOptionsWithSubtypes:(id)a0;
- (id)generateSuggestionsWithContentMode:(short)a0 suggestionController:(id)a1 progressReporter:(id)a2 shouldReload:(BOOL *)a3;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)initWithGenerationOptions:(unsigned long long)a0;
- (id)subtypePredicateWithContentMode:(short)a0;
- (id)suggestionOptionsWithContentMode:(short)a0;
- (unsigned char)suggestionProfileForContentMode:(short)a0;
- (BOOL)suggestionsExistInPhotoLibrary:(id)a0 subtypePredicate:(id)a1;

@end
