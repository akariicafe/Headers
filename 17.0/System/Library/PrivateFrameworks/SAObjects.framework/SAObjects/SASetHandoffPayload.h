@protocol SAHandoffPayload;

@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (retain, nonatomic) id<SAHandoffPayload> handoffPayload;

+ (id)setHandoffPayload;
+ (id)setHandoffPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
