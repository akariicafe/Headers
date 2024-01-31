@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *providerCache;
@property (weak, nonatomic) id<TUMetadataCacheDataProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)classIdentifier;

- (void)invalidateCache;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)_invalidateCache;
- (void)refresh;
- (id)description;
- (void).cxx_destruct;
- (id)metadataForDestinationID:(id)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void)setObject:(id)a0 forDestinationID:(id)a1;

@end
