@interface MPStoreModelRadioStationBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char beats1 : 1; unsigned char name : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned char explicit : 1; unsigned char type : 1; unsigned char subtype : 1; unsigned char artwork : 1; unsigned char stationGlyph : 1; unsigned char attributionLabel : 1; unsigned char providerName : 1; unsigned char live : 1; unsigned char startingAirDate : 1; unsigned char endingAirDate : 1; unsigned char subscriptionRequired : 1; } _requestedRadioStationProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
