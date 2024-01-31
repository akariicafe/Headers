@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying>

@property (readonly) BOOL hasPersons;
@property (readonly) BOOL hasPeopleScenes;
@property (readonly) BOOL isVideo;
@property (readonly) NSSet *personLocalIdentifiers;
@property (readonly) NSSet *peopleScenes;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)identicalSimilarity;
- (id)initWithPersonLocalIdentifiers:(id)a0 peopleScenes:(id)a1 isVideo:(BOOL)a2;

@end
