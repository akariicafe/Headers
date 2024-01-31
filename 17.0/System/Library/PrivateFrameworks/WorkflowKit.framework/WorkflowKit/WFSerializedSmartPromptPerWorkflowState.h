@class NSString, NSData, NSDictionary;

@interface WFSerializedSmartPromptPerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 actionUUID:(id)a1;

@end
