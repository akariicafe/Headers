@class NSMutableArray, NSMapTable;

@interface MPQueueFeederIdentifierRegistry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *identifierSets;
@property (retain, nonatomic) NSMapTable *index;
@property (readonly, nonatomic) long long count;

- (id)itemAtIndex:(long long)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)indexForItem:(id)a0;
- (void)applyChanges:(id)a0 identifierSetLookupBlock:(id /* block */)a1;
- (id)identifierSetAtIndex:(long long)a0;
- (id)identifierSetForItem:(id)a0;
- (id)itemForIdentifierSet:(id)a0;
- (void)replaceItemAndIdentifierSet:(id)a0 atIndex:(long long)a1;

@end
