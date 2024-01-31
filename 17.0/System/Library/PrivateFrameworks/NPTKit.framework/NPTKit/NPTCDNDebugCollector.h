@class NSString, NSMutableDictionary, NSURLSession;

@interface NPTCDNDebugCollector : NSObject <NPTMetadataCollection>

@property (retain) NSURLSession *session;
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
