@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *utterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assistantPayload;
+ (id)assistantPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
