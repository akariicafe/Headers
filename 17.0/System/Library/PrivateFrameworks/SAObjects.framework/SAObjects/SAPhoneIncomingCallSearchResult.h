@class NSString, SAPersonAttribute;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *caller;
@property (copy, nonatomic) NSString *incomingCallType;

+ (id)incomingCallSearchResult;
+ (id)incomingCallSearchResultWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
