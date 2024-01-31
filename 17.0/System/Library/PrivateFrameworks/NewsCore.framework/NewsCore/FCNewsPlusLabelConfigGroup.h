@class FCNewsPlusLabelConfig;

@interface FCNewsPlusLabelConfigGroup : NSObject

@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForTrialists;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForSubscribers;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForPaidBundleViaOffer;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
