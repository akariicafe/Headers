@class NSObject;
@protocol OS_dispatch_queue, TUBusinessServiceProviderProtocol;

@interface TUBusinessServicesMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (class, readonly, nonatomic) TUBusinessServicesMetadataCacheDataProvider *sharedInstance;

@property (readonly, nonatomic) id<TUBusinessServiceProviderProtocol> businessQueryService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ metadataQueryHandler;

+ (id)tuMetadataDestinationIDForHandleValue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void)fetchBusinessServiceInformationForHandleValue:(id)a0 completion:(id /* block */)a1;
- (id)initWithBusinessService:(id)a0;

@end
