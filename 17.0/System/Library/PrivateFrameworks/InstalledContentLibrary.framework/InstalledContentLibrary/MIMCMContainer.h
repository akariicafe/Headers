@class NSURL, NSString;

@interface MIMCMContainer : NSObject

@property (readonly, nonatomic) struct container_object_s { } *mcmContainer;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long diskUsage;
@property (readonly, nonatomic) BOOL isTransient;
@property (readonly, nonatomic) BOOL isNew;

+ (id)_allContainersForIdentifiers:(id)a0 groupIdentifiers:(id)a1 contentClass:(unsigned long long)a2 forPersona:(id)a3 transient:(BOOL)a4 create:(BOOL)a5 error:(id *)a6;
+ (id)_containerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 transient:(BOOL)a3 create:(BOOL)a4 error:(id *)a5;
+ (id)_enumeratorWithContainerClass:(unsigned long long)a0 forPersona:(id)a1 isTransient:(BOOL)a2 identifiers:(id)a3 groupIdentifiers:(id)a4 create:(BOOL)a5 usingBlock:(id /* block */)a6;
+ (id)containerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(BOOL)a3 error:(id *)a4;
+ (id)containersForBundleIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(BOOL)a3 error:(id *)a4;
+ (id)containersForContentClass:(unsigned long long)a0 forPersona:(id)a1 error:(id *)a2;
+ (id)containersForGroupIdentifier:(id)a0 forPersona:(id)a1 create:(BOOL)a2 error:(id *)a3;
+ (id)defaultDirectoriesForContainerType:(unsigned long long)a0 error:(id *)a1;
+ (BOOL)deleteContainers:(id)a0 waitForDeletion:(BOOL)a1 error:(id *)a2;
+ (id)enumerateContainersWithClass:(unsigned long long)a0 forPersona:(id)a1 isTransient:(BOOL)a2 identifiers:(id)a3 groupIdentifiers:(id)a4 usingBlock:(id /* block */)a5;
+ (id)transientContainerForIdentifier:(id)a0 contentClass:(unsigned long long)a1 forPersona:(id)a2 create:(BOOL)a3 error:(id *)a4;

- (id)initWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)replaceExistingContainer:(id)a0 error:(id *)a1;
- (BOOL)_doInitWithContainer:(struct container_object_s { } *)a0 error:(id *)a1;
- (BOOL)_refreshContainerMetadataWithError:(id *)a0;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (id)initWithSerializedContainer:(id)a0 matchingWithOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)purgeContentWithError:(id *)a0;
- (BOOL)reclaimDiskSpaceWithError:(id *)a0;
- (BOOL)recreateDefaultStructureWithError:(id *)a0;
- (BOOL)regenerateDirectoryUUIDWithError:(id *)a0;
- (id)serializedContainerRepresentation;
- (BOOL)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
