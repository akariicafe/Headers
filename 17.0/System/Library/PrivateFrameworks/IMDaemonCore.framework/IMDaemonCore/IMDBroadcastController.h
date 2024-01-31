@protocol IMDBroadcasterProviding;

@interface IMDBroadcastController : NSObject

@property (class, readonly, nonatomic) id<IMDBroadcasterProviding> sharedProvider;

+ (void)registerSharedProvider:(id)a0;

@end
