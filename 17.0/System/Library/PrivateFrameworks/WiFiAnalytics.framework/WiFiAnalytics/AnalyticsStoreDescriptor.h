@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSURL *storeURL;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long analyticsStoreOptions;
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;

+ (id)applicationSupportDirectoryPath;
+ (id)directStoreDescriptor;
+ (id)defaultModelURL;
+ (id)serverStoreDescriptor:(unsigned long long)a0;
+ (id)defaultPersistentStoreURL;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 storeURL:(id)a1 modelURL:(id)a2 options:(unsigned long long)a3;

@end
