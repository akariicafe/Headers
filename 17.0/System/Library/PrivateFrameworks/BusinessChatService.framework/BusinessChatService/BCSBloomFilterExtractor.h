@class NSString;

@interface BCSBloomFilterExtractor : NSObject <BCSBloomFilterExtractorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extractShardsURLsFromBloomFilterURL:(id)a0 completion:(id /* block */)a1;
- (void)extractShardsURLsFromFilterShardURL:(id)a0 domainShardURL:(id)a1 completion:(id /* block */)a2;

@end
