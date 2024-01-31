@class NSObject, NSMutableDictionary, NSString, CWFInterface, NSMutableArray, NSDate;
@protocol OS_dispatch_queue;

@interface NPTMetadataCollector : NSObject <NPTMetadataCollection>

@property (retain, nonatomic) CWFInterface *interface;
@property (retain, nonatomic) NSMutableArray *collectors;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property BOOL isCollectingMetadata;
@property (copy, nonatomic) id /* block */ metadataDidChangeHandlerForCollectors;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetch;
+ (id)fetchWRMMetrics;
+ (id)collectorName;
+ (id)fetchDeviceData;
+ (id)fetchCellularData;

- (id)init;
- (void).cxx_destruct;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void)stopCollecting;
- (id)initWithCollectorTypes:(id)a0;
- (BOOL)knownCollectionType:(Class)a0;

@end
