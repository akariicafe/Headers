@class NSString, NSArray;

@interface TPSCollectionSection : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *collections;
@property (readonly, nonatomic, getter=isFeatured) BOOL featured;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 collections:(id)a1;
- (id)initWithIdentifier:(id)a0 text:(id)a1 collections:(id)a2;
- (void)removeCollection:(id)a0;

@end
