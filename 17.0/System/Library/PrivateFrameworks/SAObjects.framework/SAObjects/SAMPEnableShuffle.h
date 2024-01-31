@interface SAMPEnableShuffle : SADomainCommand

@property (nonatomic) BOOL enable;

+ (id)enableShuffle;
+ (id)enableShuffleWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
