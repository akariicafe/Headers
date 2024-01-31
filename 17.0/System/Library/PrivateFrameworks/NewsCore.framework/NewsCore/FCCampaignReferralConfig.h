@class NSString, NSArray;

@interface FCCampaignReferralConfig : NSObject

@property (copy, nonatomic) NSString *campaignID;
@property (copy, nonatomic) NSArray *autoFavoriteTagIDs;

- (void).cxx_destruct;
- (id)initWithCampaignID:(id)a0 configDictionary:(id)a1;

@end
