@class NSArray;

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *flowScripts;

+ (id)fetchScriptResponse;
+ (id)fetchScriptResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
