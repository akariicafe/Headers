@class QLTBitmapFormat, QLCacheFileIdentifier, NSDictionary, NSArray, NSDate, QLCacheBlobInfo;

@interface QLCacheIndexDatabaseQueryEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    NSDictionary *_fileRequests;
    NSArray *_allFileRequests;
}

@property (readonly, nonatomic) unsigned long long cacheId;
@property (readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier;
@property (readonly, nonatomic) float size;
@property (readonly, nonatomic) unsigned char iconMode;
@property (readonly, nonatomic) long long iconVariant;
@property (readonly, nonatomic) int interpolationQuality;
@property (readonly, nonatomic) unsigned long long badgeType;
@property (readonly, nonatomic) unsigned long long externalGeneratorDataHash;
@property (readonly, nonatomic) unsigned int hitCount;
@property (readonly, nonatomic) NSDate *lastHitDate;
@property (readonly, nonatomic) QLTBitmapFormat *bitmapFormat;
@property (readonly, nonatomic) QLCacheBlobInfo *bitmapDataBlobInfo;
@property (readonly, nonatomic) QLCacheBlobInfo *metadataBlobInfo;
@property (readonly, nonatomic) int flavor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_getCacheIds;
- (void)_getCacheIdsForHomogeneousArrayOfRequests:(id)a0;
- (id)initWithSqliteDatabase:(id)a0 fileRequests:(id)a1;
- (BOOL)nextThumbnailInfo;

@end
