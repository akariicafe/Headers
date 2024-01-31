@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject;

- (id)seasonNumber;
- (void).cxx_destruct;
- (id)title;
- (id)isLocal;
- (id)canonicalID;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)initWithMediaLibrary:(id)a0 seasonManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)showIdentifier;

@end
