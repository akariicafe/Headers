@class NSString, NSDictionary;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (retain, nonatomic) NSString *scoresOutputName;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContextFeatureKey:(id)a0 channelIDsOutputName:(id)a1 scoresOutputName:(id)a2;

@end
