@class NSArray;

@interface SAGKWebLinkPod : SAGKPodView

@property (copy, nonatomic) NSArray *links;

+ (id)webLinkPod;
+ (id)webLinkPodWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
