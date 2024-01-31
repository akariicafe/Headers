@class NSSet, NSString, NSArray;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSArray *statusErrorChain;

+ (id)buildRequiredOnlyWithCode:(id)a0;
+ (id)buildWithCode:(id)a0 withErrorChain:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
