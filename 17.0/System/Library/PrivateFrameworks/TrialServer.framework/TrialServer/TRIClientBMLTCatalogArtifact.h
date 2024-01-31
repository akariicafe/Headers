@class TRIClientBmltCatalog, NSNumber;

@interface TRIClientBMLTCatalogArtifact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIClientBmltCatalog *bmltCatalog;
@property (readonly, nonatomic) NSNumber *population;

+ (id)allReferencedCKRecordKeys;
+ (BOOL)_hasStructurallyValidBMLTs:(id)a0 population:(id)a1;
+ (id)artifactFromCKRecord:(id)a0 error:(id *)a1;
+ (id)artifactWithBmltCatalog:(id)a0 population:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToArtifact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementBmltCatalog:(id)a0;
- (id)initWithBmltCatalog:(id)a0 population:(id)a1;
- (id)copyWithReplacementPopulation:(id)a0;

@end
