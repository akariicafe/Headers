@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (nonatomic) BOOL videoAllowed;

+ (id)answer;
+ (id)answerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
