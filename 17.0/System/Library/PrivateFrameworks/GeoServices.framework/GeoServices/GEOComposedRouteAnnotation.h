@class GEOPBTransitArtwork, GEOMiniCard, GEORouteAnnotation, GEOLatLng;

@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEORouteAnnotation *_annotation;
    GEOLatLng *_derivedPosition;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOMiniCard *infoCard;

- (id)position;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 annotation:(id)a3 onRoute:(id)a4;

@end
