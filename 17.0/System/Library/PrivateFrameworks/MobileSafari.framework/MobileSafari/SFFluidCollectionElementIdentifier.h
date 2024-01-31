@class NSString, NSIndexPath;

@interface SFFluidCollectionElementIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) long long elementCategory;
@property (readonly, copy, nonatomic) NSString *elementKind;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)elementIdentifierWithIndexPath:(id)a0;
- (id)initWithIndexPath:(id)a0 elementCategory:(long long)a1 elementKind:(id)a2;

@end
