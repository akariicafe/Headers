@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _MDExtensionLoader : NSObject

@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *extensionsByBundleId;
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap;
@property (retain, nonatomic) NSMutableArray *containerPaths;
@property (retain, nonatomic) NSMutableArray *queueLabels;
@property (retain, nonatomic) NSMutableArray *containerIDs;
@property (retain, nonatomic) NSMutableArray *extensionIdentifiers;
@property BOOL extensionsCacheNeedsLoad;
@property (nonatomic) long long notificationCount;

- (id)init;
- (void).cxx_destruct;
- (void)findExtensionsWithCompletionBlock:(id /* block */)a0;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(id /* block */)a0;
- (void)stopLookingForExtensions;

@end
