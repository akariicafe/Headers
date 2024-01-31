@class NSString;

@interface WBCollectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) BOOL isReadonly;
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL createIfNeeded;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long maximumTabsPerTabGroup;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) long long storeOwner;

+ (id)readonlySafariTabCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)debugTabCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;

- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2 createIfNeeded:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
