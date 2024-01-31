@class HMFLocationAuthorization, NSString, NSURL, NSOperationQueue, NSArray;

@interface HMHomeManagerConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) BOOL shouldConnect;
@property (readonly) BOOL canUseCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long options;
@property (readonly, getter=isDiscretionary) BOOL discretionary;
@property (readonly, getter=isAdaptive) BOOL adaptive;
@property (readonly) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)defaultPrivateConfiguration;
+ (id)defaultConfiguration;

- (id)init;
- (id)initWithOptions:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
