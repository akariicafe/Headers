@class _PASLock;
@protocol _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting;

@interface _CDUserActivityCache : NSObject {
    id<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting> _knowledgeStore;
    _PASLock *_deletionCache;
    unsigned int _count;
}

- (unsigned int)count;
- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (void)_populateAppActivityStream;
- (void)_populateAppLocationActivityStream;
- (void)addSourceID:(id)a0 bundleID:(id)a1 itemID:(id)a2;
- (BOOL)containsObjectForSourceID:(id)a0 bundleID:(id)a1 itemID:(id)a2;
- (id)hashArrayForSourceID:(id)a0 bundleID:(id)a1 itemID:(id)a2;
- (void)populateCache;

@end
