@class NSString, NSArray, LNDebouncer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, LNVocabularyDonator, LNVocabularyPicker;

@interface LNSiriVocabulary : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *corpora;
@property (readonly, nonatomic) id<LNVocabularyDonator> donatorClient;
@property (readonly, nonatomic) id<LNVocabularyPicker> vocabularyPicker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) LNDebouncer *debouncer;
@property (retain, nonatomic) NSMutableArray *completions;

+ (id)vocabularyForBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)corpusContentsChanged:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 donatorClient:(id)a1 picker:(id)a2;
- (void)setCorporaByPriority:(id)a0 completionHandler:(id /* block */)a1;

@end
