@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)a0;

- (int)referenceFrame;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasVenueFeatureType;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (id)_place;
- (unsigned long long)_muid;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)name;
- (BOOL)_isTransitDisplayFeature;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_identifier;
- (id)_labelMarker;
- (id)initWithLabelMarker:(id)a0;

@end
