@class NSNumber, NSString, NSDictionary;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSDictionary *responseParameters;
@property (readonly, nonatomic) NSString *dsid;

- (id)responseParametersForServiceIdentifier:(id)a0;

@end
