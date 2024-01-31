@class NSSet, NSOrderedSet, NSMapTable, PRPosterConfiguration;

@interface PRPosterCollection : NSObject {
    id /* block */ _attributeProvider;
    id /* block */ _configuredPropertiesProvider;
    NSSet *_posterExtensions;
    NSMapTable *_associatedPosterMap;
    NSMapTable *_posterToAttributeMap;
}

@property (readonly) NSSet *associatedPosters;
@property (readonly) NSSet *posterExtensions;
@property (readonly) NSOrderedSet *orderedPosterUUIDs;
@property (readonly) NSSet *associatedPosterUUIDs;
@property (readonly) PRPosterConfiguration *selectedPoster;
@property (readonly, copy) NSOrderedSet *orderedPosters;

- (id)configuredPropertiesForPoster:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)posterWithUUID:(id)a0;
- (id)associatedHomeScreenConfigurationsMap;
- (id)associatedPosterForPoster:(id)a0;
- (id)associatedPosterForUUID:(id)a0;
- (id)attributeForPoster:(id)a0 ofType:(id)a1;
- (id)attributesForPoster:(id)a0 ofTypes:(id)a1;
- (id)chargerIdentifierRelationships;
- (id)fallbackSelectedForSortedConfigurations:(id)a0 reverse:(BOOL)a1;
- (id)initWithSelectedPoster:(id)a0 posters:(id)a1 associatedPosterMap:(id)a2 attributeProvider:(id /* block */)a3;
- (BOOL)isEqualToCollection:(id)a0;
- (BOOL)isPosterConfigurationAnAssociatedPoster:(id)a0 parentPoster:(out id *)a1;

@end
