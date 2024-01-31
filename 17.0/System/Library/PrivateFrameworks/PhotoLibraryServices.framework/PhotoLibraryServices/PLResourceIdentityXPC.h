@class NSString, PLUniformTypeIdentifier;

@interface PLResourceIdentityXPC : NSObject <PLResourceIdentity>

@property (readonly, nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned int recipeID;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageRequestResourceForDataStoreKey:(id)a0 store:(id)a1 assetObjectID:(id)a2 context:(id)a3;
+ (id)dictionaryRepresentationFromResourceIdentity:(id)a0;
+ (id)possibleClassesInDictionaryRepresentation;

- (id)initWithResource:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithResourceType:(unsigned int)a0 version:(unsigned int)a1 recipeID:(unsigned int)a2 uti:(id)a3 conformsToTypes:(long long)a4;

@end
