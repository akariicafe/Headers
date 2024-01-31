@class NSString, AMSBagKeySet;
@protocol AMSBagProtocol;

@interface AMSRatingsStorefrontTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

@end
