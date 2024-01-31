@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>

@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;

+ (id)optionsWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)copyWithReplacementDownloadOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
