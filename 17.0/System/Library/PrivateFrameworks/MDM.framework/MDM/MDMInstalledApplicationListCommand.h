@class NSDictionary, NSSet;
@protocol MDMAppItemsDataSource;

@interface MDMInstalledApplicationListCommand : NSObject

@property (nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) id<MDMAppItemsDataSource> dataSource;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) NSSet *appsRequested;
@property (nonatomic) BOOL shouldReturnManagedAppsOnly;
@property (copy, nonatomic) NSSet *itemsRequested;
@property (copy, nonatomic) NSDictionary *appItems;
@property (copy, nonatomic) NSDictionary *response;

+ (id)allItems;
+ (id)itemsThatMustAlwaysBeReturned;

- (void)_reset;
- (void).cxx_destruct;
- (id)responseForRequest:(id)a0;
- (void)_processManagedAppsOnlyArgument;
- (void)_processArguments;
- (void)_processIdentifiersArgument;
- (void)_processItemsArgument;
- (void)_validateRequestDictionaryIsPresentAndADictionary;
- (void)fetchAppProperties;

@end
