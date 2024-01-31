@class NSDictionary, INPlayMediaIntent, NSString;

@interface WFPlayMediaIntentPodcastObject : WFiTunesPodcastObject <MTLJSONSerializing>

@property (readonly, nonatomic) INPlayMediaIntent *intent;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)intentJSONTransformer;

@end
