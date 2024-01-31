@class SMCacheMO, SMReceiverSessionStatusMO;

@interface SMReceiverContactMO : SMContactMO

@property (retain, nonatomic) SMCacheMO *phoneCache;
@property (retain, nonatomic) SMCacheMO *watchCache;
@property (retain, nonatomic) SMReceiverSessionStatusMO *sessionStatus;
@property (nonatomic) long long numCacheDownloads;
@property (nonatomic) long long numSuccessfulCacheDownloads;
@property (nonatomic) long long maxPhoneCacheSize;
@property (nonatomic) long long maxWatchCacheSize;
@property (nonatomic) long long maxLocationsInPhoneCacheTrace;
@property (nonatomic) long long maxLocationsInWatchCacheTrace;
@property (nonatomic) double timeTillCacheRelease;
@property (nonatomic) double timeTillFirstSuccessfulCacheDownload;

+ (id)fetchRequest;
+ (id)managedObjectWithReceiverContact:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithReceiverContact:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
