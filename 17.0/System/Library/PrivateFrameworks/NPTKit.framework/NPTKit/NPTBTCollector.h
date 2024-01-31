@class NSArray, NSMutableDictionary, W5Client, NSString;

@interface NPTBTCollector : NSObject <NPTMetadataCollection>

@property (retain, nonatomic) W5Client *client;
@property (retain, nonatomic) NSArray *eventsToMonitor;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;

- (void).cxx_destruct;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void)stopCollecting;

@end
