@class NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol TCGECModel, OS_dispatch_queue;

@interface TCGECEditor : NSObject <TCPostEditing> {
    NSDictionary *_options;
    NSObject<TCGECModel> *_model;
    NSMutableDictionary *_cachedGrammarDetailsDictionary;
    NSMutableArray *_cachedSentenceArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _modelLoadingState;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)_loadModel;
- (id)OTABundlePath;
- (id)backgroundLoadingQueue;
- (void)checkSentence:(id)a0 locale:(id)a1 offset:(unsigned long long)a2 options:(id)a3 requireResult:(BOOL)a4 mutableResults:(id)a5;
- (void)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tagger:(id)a2 offset:(unsigned long long)a3 options:(id)a4 mutableResults:(id)a5;
- (id)computedGrammarDetailsForSentence:(id)a0 locale:(id)a1 options:(id)a2;
- (id)grammarDetailsForSentence:(id)a0 locale:(id)a1 options:(id)a2;
- (void)loadModelsInBackground:(BOOL)a0;
- (long long)modelTypeWithOptions:(id)a0;
- (id)modelUsingBackgroundLoading:(BOOL)a0;
- (void)resetModels;

@end
