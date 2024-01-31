@class NSString;

@interface BMStoreDirectory : NSObject

@property (class, readonly, nonatomic) NSString *tmp;
@property (class, readonly, nonatomic) NSString *compute;
@property (class, readonly, nonatomic) NSString *artifacts;
@property (class, readonly, nonatomic) NSString *sessions;
@property (class, readonly, nonatomic) NSString *bookmarks;
@property (class, readonly, nonatomic) NSString *client;
@property (class, readonly, nonatomic) NSString *server;
@property (class, readonly, nonatomic) NSString *nonwaking;
@property (class, readonly, nonatomic) NSString *subscriptions;
@property (class, readonly, nonatomic) NSString *persistent;
@property (class, readonly, nonatomic) NSString *flexibleStorage;
@property (class, readonly, nonatomic) NSString *sync;
@property (class, readonly, nonatomic) NSString *streams;
@property (class, readonly, nonatomic) NSString *public;
@property (class, readonly, nonatomic) NSString *restricted;
@property (class, readonly, nonatomic) NSString *private;
@property (class, readonly, nonatomic) NSString *localDevice;
@property (class, readonly, nonatomic) NSString *tombstones;
@property (class, readonly, nonatomic) NSString *lock;
@property (class, readonly, nonatomic) NSString *metadata;
@property (class, readonly, nonatomic) NSString *remoteDevices;
@property (class, readonly, nonatomic) NSString *databases;
@property (class, readonly, nonatomic) NSString *sharedSync;

+ (void)setBasePathForTestingWithPath:(id)a0;
+ (void)unsetBasePathForTesting;

@end
