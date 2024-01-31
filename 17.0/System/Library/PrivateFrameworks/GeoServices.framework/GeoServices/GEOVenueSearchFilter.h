@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) id<GEOVenueIdentifier> identifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
