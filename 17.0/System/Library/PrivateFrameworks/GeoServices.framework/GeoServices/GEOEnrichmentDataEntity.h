@class NSString, NSArray, NSData, GEOEnrichmentInfo, GEOPDEnrichmentDataEntity;

@interface GEOEnrichmentDataEntity : NSObject {
    GEOPDEnrichmentDataEntity *_enrichmentDataEntity;
}

@property (readonly, nonatomic) GEOEnrichmentInfo *enrichmentInfo;
@property (readonly, nonatomic) NSString *enrichmentHtml;
@property (readonly, nonatomic) NSData *enrichmentMetadata;
@property (readonly, nonatomic) NSArray *appAdamIds;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnrichmentDataEntity:(id)a0;

@end
