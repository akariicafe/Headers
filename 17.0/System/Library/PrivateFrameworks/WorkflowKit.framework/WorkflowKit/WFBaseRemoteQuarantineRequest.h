@class NSString, NSDictionary;

@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest>

@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *userLocale;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *policyFunctionName;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptTitle;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptMessage;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorTitle;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (void).cxx_destruct;
- (id)javaScriptCoreRepresentationWithError:(id *)a0;

@end
