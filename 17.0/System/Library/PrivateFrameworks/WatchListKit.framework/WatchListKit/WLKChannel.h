@class WLKChannelDetails, NSString, NSDictionary, NSArray;

@interface WLKChannel : NSObject

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) WLKChannelDetails *details;
@property (readonly, copy, nonatomic) NSDictionary *punchoutUrls;
@property (readonly, copy, nonatomic) NSArray *seasonNumbers;
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers;

+ (id)channelsWithDictionaries:(id)a0 context:(id)a1;
+ (id)channelsWithDictionaries:(id)a0 context:(id)a1 seasons:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;

@end
