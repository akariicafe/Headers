@class SUUIStoreIdentifier, NSNumber, NSString;

@interface SUUILibraryItem : NSObject <NSCopying>

@property (copy, nonatomic) SUUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
