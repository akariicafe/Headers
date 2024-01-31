@class NSURL;

@interface SAMPSetOutputSource : SADomainCommand

@property (copy, nonatomic) NSURL *outputSourceId;

+ (id)setOutputSource;
+ (id)setOutputSourceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
