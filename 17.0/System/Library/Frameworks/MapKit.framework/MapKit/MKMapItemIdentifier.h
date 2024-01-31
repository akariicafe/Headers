@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

- (id)init;
- (unsigned long long)hash;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)initWithMUID:(unsigned long long)a0;
- (unsigned long long)muid;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)geoMapItemIdentifier;
- (id)initWithGEOMapItemIdentifier:(id)a0;

@end
