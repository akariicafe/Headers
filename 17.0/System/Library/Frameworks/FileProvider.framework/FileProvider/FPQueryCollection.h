@class NSArray, NSString, NSPredicate, NSNumber, FPQueryEnumerationSettings;

@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate> {
    Class _descriptorClass;
    BOOL _isFetchingAssertion;
}

@property (readonly) FPQueryEnumerationSettings *settings;
@property (readonly) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long itemsOrigin;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *allowedProviderIdentifiers;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *tagIdentifier;
@property (copy) NSString *descriptionName;
@property (readonly) unsigned long long lastForcedUpdate;

+ (void)disableMountPointQueries;
+ (void)enableMountPointQueries;
+ (void)resumeAllQueries;
+ (void)suspendAllQueries;

- (id)description;
- (void).cxx_destruct;
- (id)_createDescriptorWithSortDescriptors:(id)a0;
- (id)_enumerationSettingsPredicate;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (void)dataSource:(id)a0 didChangeItemsOrigin:(unsigned long long)a1;
- (id)initWithQueryDescriptorClass:(Class)a0;
- (id)initWithQueryDescriptorClass:(Class)a0 predicate:(id)a1;
- (id)initWithQueryDescriptorClass:(Class)a0 predicate:(id)a1 paced:(BOOL)a2;
- (id)scopedSearchQuery;
- (id)underlyingQueryStringForMountPoint:(id)a0;

@end
