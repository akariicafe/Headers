@class NSString;

@interface HMDNetworkActivityWrapperFactory : NSObject <HMDNetworkActivityWrapperFactory>

@property (class, readonly, nonatomic) HMDNetworkActivityWrapperFactory *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)networkActivityWrapperWithLabel:(unsigned long long)a0;

@end
