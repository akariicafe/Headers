@class NSString, NSArray, NSDictionary, TPSCollection, TPSAssetSizes;

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *orderedCollectionIdentifiers;
@property (retain, nonatomic) NSArray *savedTipIdentifiers;
@property (retain, nonatomic) NSArray *collectionSections;
@property (retain, nonatomic) NSArray *userGuides;
@property (retain, nonatomic) NSDictionary *collectionSectionMap;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (readonly, nonatomic) NSArray *orderedCollections;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)hasTipContent;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateOrderedCollectionIdentifiers;

@end
