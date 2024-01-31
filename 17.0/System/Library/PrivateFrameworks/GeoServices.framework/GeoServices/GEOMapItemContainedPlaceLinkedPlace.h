@class GEOMapItemIdentifier, GEOFeatureStyleAttributes, GEOPDLinkedPlace;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOPDLinkedPlace *_linkedPlace;
    GEOMapItemIdentifier *_identifier;
    GEOFeatureStyleAttributes *_styleAttributes;
}

- (int)referenceFrame;
- (int)_resultProviderID;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasMUID;
- (id)_styleAttributes;
- (unsigned long long)_muid;
- (struct { double x0; double x1; })coordinate;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)name;
- (BOOL)_isInLinkedPlaceRelationship;
- (id)_identifier;
- (id)initWithLinkedPlace:(id)a0;

@end
