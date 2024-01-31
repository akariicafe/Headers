@class NSString, NSArray, SKUIStoreIdentifier, NSNumber;

@interface SKUIItemState : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL activeStateIsPreview;
@property (readonly, nonatomic) unsigned long long allContentFlags;
@property (nonatomic) unsigned long long downloadContentFlags;
@property (copy, nonatomic) NSString *downloadPhase;
@property (nonatomic) float downloadProgress;
@property (copy, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSArray *downloadIdentifiers;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic) unsigned long long libraryContentFlags;
@property (nonatomic) long long mediaCategory;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *variantIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
