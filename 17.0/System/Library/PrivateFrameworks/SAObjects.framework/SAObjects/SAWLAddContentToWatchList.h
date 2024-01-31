@class NSString;

@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;

+ (id)addContentToWatchListWithDictionary:(id)a0 context:(id)a1;
+ (id)addContentToWatchList;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
