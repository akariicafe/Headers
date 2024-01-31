@class NSString, NSDictionary;

@interface WBSCyclerItemRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (copy, nonatomic) NSString *symbolImageName;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithTitle:(id)a0 symbolImageName:(id)a1 uniqueIdentifier:(id)a2;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:(id)a0;

@end
