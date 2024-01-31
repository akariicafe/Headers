@class NSString;

@interface ICMusicSubscriptionStatusRemoteRequesting : NSObject

@property (class, readonly, nonatomic) NSString *machServiceName;

+ (id)clientInterface;
+ (id)serviceInterface;

@end
