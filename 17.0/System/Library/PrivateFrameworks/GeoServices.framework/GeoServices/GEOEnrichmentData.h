@class NSArray, NSData, GEOPDEnrichmentData;

@interface GEOEnrichmentData : NSObject <NSCopying> {
    GEOPDEnrichmentData *_enrichmentData;
}

@property (readonly, nonatomic) NSArray *enrichmentEntities;
@property (readonly, nonatomic) NSData *placecardEnrichmentMetadata;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnrichmentData:(id)a0;

@end
