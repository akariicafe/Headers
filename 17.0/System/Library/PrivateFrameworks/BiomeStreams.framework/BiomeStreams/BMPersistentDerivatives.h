@class NSString, NSURL, BPSPublisher, BMSQLStoreManager;

@interface BMPersistentDerivatives : BMBookmarkablePublisher

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) BPSPublisher *upstream;
@property (retain, nonatomic) BMSQLStoreManager *manager;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)startWithSubscriber:(id)a0;
- (id)init;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (id)initWithUpstream:(id)a0 derivativeDatabaseURL:(id)a1 derivedTableName:(id)a2;

@end
