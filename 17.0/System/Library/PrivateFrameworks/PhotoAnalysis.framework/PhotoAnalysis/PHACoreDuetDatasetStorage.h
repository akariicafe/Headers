@protocol _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface PHACoreDuetDatasetStorage : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeSaving, _DKKnowledgeQuerying> knowledgeStore;

- (id)init;
- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (id)_getEventStreamForDatasetName:(id)a0;
- (void)addSample:(id)a0 toDataset:(id)a1;
- (id)samplesForDataset:(id)a0 subset:(id)a1;

@end
