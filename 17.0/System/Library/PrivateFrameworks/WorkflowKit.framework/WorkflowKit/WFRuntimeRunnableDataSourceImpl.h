@class NSString, NSArray, WFConcreteRunnableEntry, NSError;
@protocol WFPropertyListObject;

@interface WFRuntimeRunnableDataSourceImpl : NSObject

- (id)init;
- (void)fetchSerializedParameterStateWithEntry:(WFConcreteRunnableEntry *)a0 bundleIdentifier:(NSString *)a1 parameterKey:(NSString *)a2 completionHandler:(void (^)(id<WFPropertyListObject>, NSError *))a3;
- (void)loadEntriesFor:(Class)a0 parameterKey:(NSString *)a1 collectionIdentifier:(NSString *)a2 limit:(long long)a3 completionHandler:(void (^)(NSArray *, NSError *))a4;

@end
