@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)init;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)frequencyCapDataParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (void).cxx_destruct;
- (id)privacyDataKeyParameter;
- (id)toroClickCountDataParameter;

@end
