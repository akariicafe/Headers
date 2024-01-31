@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject;

- (void).cxx_destruct;
- (id)title;
- (id)isLocal;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)initWithMediaLibrary:(id)a0 seriesManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)seasonCount;
- (id)showIdentifier;

@end
