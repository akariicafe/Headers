@interface ENExposureDetectionDaemonSessionStatistics : NSObject <NSCopying>

@property (nonatomic) unsigned long long droppedCachedKeyUpdatesCount;
@property (nonatomic) unsigned long long droppedKeyCount;
@property (nonatomic) unsigned long long fileKeyCount;
@property (nonatomic) unsigned long long fileInvalidKeyCount;
@property (nonatomic) unsigned long long invalidFileSignatureCount;
@property (nonatomic) unsigned long long matchedKeyCount;
@property (nonatomic) unsigned long long newCachedKeyCount;
@property (nonatomic) unsigned long long processedFileCount;
@property (nonatomic) unsigned long long revokedKeyCount;
@property (nonatomic) unsigned long long updatedCachedKeyCount;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
