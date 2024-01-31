@interface GEOFollowUpRequestMetadata : NSObject

@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) int dataType;
@property (readonly, nonatomic) BOOL isSearchRequestForNearbyPlaces;

- (int)_dataTypeFrom:(int)a0;
- (int)_requestTypeFrom:(int)a0;
- (id)initWithGEOPDFollowUpRequestMetadata:(id)a0;

@end
