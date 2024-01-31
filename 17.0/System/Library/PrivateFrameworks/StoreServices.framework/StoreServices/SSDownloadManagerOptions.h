@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;
@property (nonatomic) BOOL ignoreDivertedDownloads;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (copy, nonatomic) NSArray *prefetchedDownloadProperties;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
