@class SAIntentGroupSiriKitMetrics, NSArray, NSString, NSData, SASVSystemDialogActOutput;

@interface SARDNativeFlowContextUpdate : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *applicationContext;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *clientFlowUpdateContextList;
@property (copy, nonatomic) NSData *pegasusConversationContext;
@property (copy, nonatomic) NSData *promptContextProto;
@property (nonatomic) BOOL resetFlowTaskState;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
