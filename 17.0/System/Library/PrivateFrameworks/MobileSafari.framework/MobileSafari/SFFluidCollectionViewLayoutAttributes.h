@class NSString, SFFluidCollectionElementIdentifier, NSMutableDictionary, NSIndexPath;

@interface SFFluidCollectionViewLayoutAttributes : NSObject <NSCopying> {
    NSMutableDictionary *_customProperties;
}

@property (readonly, nonatomic, getter=_representedElementIdentifier) SFFluidCollectionElementIdentifier *representedElementIdentifier;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) double zPosition;
@property (readonly, nonatomic) long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateCustomPropertiesWithBlock:(id /* block */)a0;
- (void)_enumerateCustomPropertiesWithDoubleBlock:(id /* block */)a0 floatBlock:(id /* block */)a1 pointBlock:(id /* block */)a2 sizeBlock:(id /* block */)a3 rectBlock:(id /* block */)a4;
- (BOOL)hasAnimatableChangesFromAttributes:(id)a0;
- (id)initForSupplementaryViewOfKind:(id)a0 withIndexPath:(id)a1;
- (id)initWithElementIdentifier:(id)a0;
- (id)initWithIndexPath:(id)a0;
- (void)setValue:(id)a0 forCustomProperty:(id)a1;
- (id)valueForCustomProperty:(id)a0;

@end
