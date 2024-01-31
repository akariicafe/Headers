@class NSString, NSURL;

@interface STWebService : NSObject

@property (class, readonly, copy) NSString *clientBundleIdentifier;
@property (class, readonly, copy) NSURL *clientBundleURL;

+ (id)newDelegateInterface;
+ (id)newServiceInterface;

@end
