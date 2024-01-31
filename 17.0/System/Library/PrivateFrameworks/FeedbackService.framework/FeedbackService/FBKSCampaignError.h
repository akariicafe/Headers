@class NSDate, NSString, FBKSCampaignError_FrameworkPrivateName;

@interface FBKSCampaignError : NSObject

@property (retain, nonatomic) FBKSCampaignError_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *errorDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSwiftObject:(id)a0;

@end
