@class NSString, AMSBagKeySet;

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)isDisabledAdsPrefetch:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)isSubsequentAdsFetchDisabled;
+ (id)adprivacydBag;
+ (void)isSubsequentAdsFetchDisabled:(id)a0 withCompletionHandler:(id /* block */)a1;


@end
