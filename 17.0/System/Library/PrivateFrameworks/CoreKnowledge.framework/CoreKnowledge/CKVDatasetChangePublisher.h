@class CKVReplicatedEntityEnumerator, CKVDataset;
@protocol BMBookmark;

@interface CKVDatasetChangePublisher : BMBookmarkablePublisher

@property (retain, nonatomic) CKVDataset *dataset;
@property (retain, nonatomic) CKVReplicatedEntityEnumerator *enumerator;
@property (retain, nonatomic) id<BMBookmark> bookmark;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (id)init;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (id)initWithDataset:(id)a0;

@end
