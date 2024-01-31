@class NSString, FTServerEndpointFeatures;

@interface FTMutableSpeechTranslationServerEndpointFeatures : FTSpeechTranslationServerEndpointFeatures

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) FTServerEndpointFeatures *server_endpoint_features;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
