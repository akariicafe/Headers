@class NSArray, NSString, TIInputMode, TILanguageModelAdaptationContext, NSDictionary;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic, getter=isMultiLingualModeEnabled) BOOL multiLingualModeEnabled;
@property (readonly, nonatomic) BOOL validEnglishTransformerMultilingualConfig;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSArray *customResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) BOOL usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (nonatomic) int inlineCompletionPrecision;
@property (nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearDynamicLearningCaches;
- (void)findRecordsMatchingRecipient:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushDynamicLearningCaches;
- (BOOL)hasLanguageModelBundle;
- (id)initWithInputMode:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4 isMultiLingualModeEnabled:(BOOL)a5 validEnglishTransformerMultilingualConfig:(BOOL)a6 trialParameters:(id)a7 inlineCompletionPrecision:(int)a8;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })languageModelForAdaptationContext:(id)a0;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })lightweightLanguageModel;
- (void)lookupRecordForRecipientIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)a0 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a1;
- (void)setLanguageModelClientIdentifier:(id)a0;
- (void)setLanguageModelRecipientIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 completion:(id /* block */)a2;
- (void)unwireLanguageModelMemory;
- (void)wireLanguageModelMemory;

@end
