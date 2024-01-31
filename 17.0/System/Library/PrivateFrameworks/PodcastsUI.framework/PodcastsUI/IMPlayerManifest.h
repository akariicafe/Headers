@class NSString, NSUserActivity, NSObject, IMPlayerItem;
@protocol OS_dispatch_queue;

@interface IMPlayerManifest : NSObject

@property (retain, nonatomic) NSUserActivity *activity;
@property (retain, nonatomic) IMPlayerItem *currentItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (nonatomic) unsigned long long currentIndex;

+ (id)_activityType;
+ (void)registerManifestForRestoration:(Class)a0;
+ (id)activityTypeSuffix;
+ (void)createManifestForActivity:(id)a0 completion:(id /* block */)a1;
+ (void)restoreActivity:(id)a0 completion:(id /* block */)a1;
+ (id)supportedActivityTypes;

- (void)load:(id /* block */)a0;
- (void)previous;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_load:(id /* block */)a0;
- (void)next;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (void)assertIndexInBounds:(unsigned long long)a0;
- (BOOL)hasPrevious;
- (void)nextManifest:(id /* block */)a0;
- (void)postLoadedAdditionalItemsNotification;
- (void)postManifestDidChangeNotification;

@end
