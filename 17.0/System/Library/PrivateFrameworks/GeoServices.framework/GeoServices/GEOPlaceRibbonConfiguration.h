@class NSArray, GEOPDPlaceRibbonConfiguration;

@interface GEOPlaceRibbonConfiguration : NSObject {
    GEOPDPlaceRibbonConfiguration *_ribbonConfig;
}

@property (readonly, nonatomic) NSArray *ribbonItems;

- (void).cxx_destruct;
- (void)_addAmenityEntryForRibbonItem:(id)a0 toArray:(id)a1;
- (void)_addFactoidEntriesForRibbonItem:(id)a0 toArray:(id)a1;
- (void)_addRegularRibbonEntryForType:(int)a0 toArray:(id)a1;
- (void)_buildRibbonItems;
- (id)initWithRibbonConfiguration:(id)a0;

@end
