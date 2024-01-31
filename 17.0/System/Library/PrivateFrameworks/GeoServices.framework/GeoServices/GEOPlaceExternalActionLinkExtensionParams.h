@class GEOAttributionApp, NSString, GEOPDExtensionParams, NSMapTable;

@interface GEOPlaceExternalActionLinkExtensionParams : NSObject {
    GEOPDExtensionParams *_extensionParams;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) NSString *externalItemId;
@property (readonly, nonatomic) GEOAttributionApp *attributionApp;

- (void).cxx_destruct;
- (id)initWithExtensionParams:(id)a0 attributionMap:(id)a1;

@end
