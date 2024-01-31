@class NSString;

@interface AMDColdstartURL : NSManagedObject

@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;
+ (id)deleteAllColdstartUrls:(id *)a0;
+ (void)deleteColdstartURLs:(id)a0 error:(id *)a1;
+ (id)fetchAll:(id *)a0;
+ (id)getColdstartURLForModel:(id)a0 error:(id *)a1;
+ (id)getCurrentURLInfoByModelId;
+ (void)saveColdstartURL:(id)a0 error:(id *)a1;

@end
