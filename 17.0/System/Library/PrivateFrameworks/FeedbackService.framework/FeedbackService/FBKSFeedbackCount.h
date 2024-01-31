@class FBKSCampaign, NSArray, FBKSFeedbackCount_FrameworkPrivateName;

@interface FBKSFeedbackCount : NSObject

@property (retain, nonatomic) FBKSFeedbackCount_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) FBKSCampaign *currentCampaign;
@property (readonly, nonatomic) NSArray *feedbackFiled;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) long long declineCount;

+ (void)fetchCountsForFormWithIdentifier:(id)a0 completion:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCampaign:(id)a0 campaignErrors:(id)a1 feedbackSubmitted:(id)a2 declineCount:(long long)a3;
- (id)initWithSwiftObject:(id)a0;

@end
