@class SKUIStoreIdentifier, NSNumber, NSString;

@interface SKUILibraryItem : NSObject <NSCopying>

@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
