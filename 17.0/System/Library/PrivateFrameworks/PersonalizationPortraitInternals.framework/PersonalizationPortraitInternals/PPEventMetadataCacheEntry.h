@class PPEventMetadata, NSDate;

@interface PPEventMetadataCacheEntry : NSObject

@property (nonatomic) unsigned long long chunkIndex;
@property (retain, nonatomic) NSDate *expiration;
@property (retain, nonatomic) PPEventMetadata *metadata;

- (void).cxx_destruct;

@end
