@class BMStoreStream, BMStoreConfig;

@interface BMPruner : NSObject

@property (readonly, nonatomic) BMStoreStream *storeStream;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteStoreEvent:(id)a0;
- (void)deleteEventsPassingTest:(id /* block */)a0;
- (void)deleteWithPolicy:(id)a0 eventsPassingTest:(id /* block */)a1;
- (id)initWithStoreStream:(id)a0 config:(id)a1;
- (void)pruneStream;

@end
