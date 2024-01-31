@class QLCacheVersionedFileIdentifier;

@interface QLCacheFileInfo : NSObject

@property (readonly, nonatomic) unsigned long long cacheId;
@property (readonly, nonatomic) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (readonly, nonatomic) unsigned long long thumbnailCount;
@property (readonly, nonatomic) float minSize;
@property (readonly, nonatomic) float maxSize;
@property (readonly, nonatomic) unsigned long long totalDataLength;

- (void).cxx_destruct;
- (id)initWithCacheId:(unsigned long long)a0 versionedFileIdentifier:(id)a1;
- (id)initWithCacheId:(unsigned long long)a0 versionedFileIdentifier:(id)a1 thumbnailCount:(unsigned long long)a2 minSize:(float)a3 maxSize:(float)a4 totalDataLength:(unsigned long long)a5;

@end
