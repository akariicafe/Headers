@class NSURL, FCFDBStorage, NSObject;
@protocol OS_dispatch_queue;

@interface FCFeedDatabase : NSObject <FCFeedDatabaseProtocol> {
    long long _usage;
    NSObject<OS_dispatch_queue> *_initQueue;
    FCFDBStorage *_storage;
}

@property (readonly, copy, nonatomic) NSURL *parentDirectoryURL;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) long long endpoint;
@property (readonly, nonatomic) unsigned short version;

+ (id)temporaryFeedDatabaseWithEndpoint:(long long)a0;

- (void)prewarm;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)teardown;
- (id)initWithParentDirectoryURL:(id)a0 usage:(long long)a1 endpoint:(long long)a2;
- (id)t_lookupFeedID:(id)a0 range:(id)a1 maxCount:(unsigned long long)a2;
- (void)t_insertSegmentForFeedID:(id)a0 range:(id)a1 items:(id)a2;
- (void).cxx_destruct;

@end
