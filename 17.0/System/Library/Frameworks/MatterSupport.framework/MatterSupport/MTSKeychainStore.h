@class NSString, NSDictionary;
@protocol MTSKeychainStoreDataSource;

@interface MTSKeychainStore : NSObject

@property (readonly) id<MTSKeychainStoreDataSource> dataSource;
@property (readonly, copy) NSString *scope;
@property (readonly, copy) NSDictionary *allDataByKey;

+ (id)logCategory;

- (id)initWithScope:(id)a0;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)removeAllDataWithError:(id *)a0;
- (BOOL)removeDataForKey:(id)a0 error:(id *)a1;
- (id)attributeDictionaryForAddingData:(id)a0 forKey:(id)a1;
- (id)attributeDictionaryForUpdatingData:(id)a0;
- (id)initWithScope:(id)a0 dataSource:(id)a1;
- (id)queryDictionaryForKey:(id)a0 isExpectingReturnData:(BOOL)a1;

@end
