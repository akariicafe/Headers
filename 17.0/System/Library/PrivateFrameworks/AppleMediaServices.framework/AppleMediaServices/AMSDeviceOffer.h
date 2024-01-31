@class NSString, NSSet, AMSBagKeySet, NSNumber;

@interface AMSDeviceOffer : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSNumber *adamId;
@property (copy, nonatomic) NSString *description;
@property (nonatomic, getter=isDowngrading) BOOL downgrading;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (readonly, nonatomic) unsigned long long offerType;
@property (readonly, nonatomic) NSSet *serialNumbers;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)offersSetFromArray:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOfferIdentifier:(id)a0;

@end
