@class NSNumber;

@interface SAEmailAceUiEmail : SAEmailEmail

@property (copy, nonatomic) NSNumber *read;

+ (id)aceUiEmail;
+ (id)aceUiEmailWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
