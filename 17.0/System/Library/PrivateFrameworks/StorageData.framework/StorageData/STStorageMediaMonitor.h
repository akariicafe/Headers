@class NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface STStorageMediaMonitor : NSObject

@property (copy, nonatomic) NSDictionary *atcDictionary;
@property (nonatomic) BOOL isAsynchronouslyLoaded;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *refreshQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *refreshTimer;
@property (nonatomic) unsigned long long refreshStartTimestamp;
@property (copy, nonatomic) NSArray *usedDataClasses;
@property (retain, nonatomic) id photosLibToken;

+ (id)sharedMonitor;
+ (id)listOfUsedDataClassesInOverrides:(id)a0;

- (void)sync;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)_updateATCData;
- (void)loadingComplete:(id)a0;
- (void)mpLibraryChanged:(id)a0;
- (void)stopMonitor;
- (void)updateATCData;

@end
