@class BMStream;

@interface GDGeoHashVisitUtility : NSObject {
    BMStream *_geoHashStream;
}

- (void).cxx_destruct;
- (id)_rawGeoHashVisitEventPublisherFrom:(id)a0 to:(id)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 reversed:(BOOL)a4 level:(long long)a5;
- (id)_rawGeoHashVisitEventPublisherFrom:(id)a0 to:(id)a1 reversed:(BOOL)a2 level:(long long)a3;
- (id)geoHashVisitEventPublisherFrom:(id)a0 to:(id)a1 level:(long long)a2;
- (id)initWithGeoHashStream:(id)a0;
- (id)lastGeoHashVisitEventAt:(id)a0 level:(long long)a1;

@end
