@class NSString, NSDictionary, AVMetadataItem;

@interface MPTimedMetadata : NSObject {
    AVMetadataItem *_metadataItem;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *keyspace;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSDictionary *allMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithMetadataItem:(id)a0;

@end
