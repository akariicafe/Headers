@class NSString, GEOPDEnrichmentInfo;

@interface GEOEnrichmentInfo : NSObject <NSCopying> {
    GEOPDEnrichmentInfo *_enrichmentInfo;
}

@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) NSString *showcaseId;
@property (readonly, nonatomic) NSString *showcaseSharingTitle;
@property (readonly, nonatomic) NSString *showcaseSharingSubtitle;
@property (readonly, nonatomic) NSString *showcaseSharingImageUrl;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnrichmentInfo:(id)a0;
- (id)pdEnrichmentInfo;

@end
