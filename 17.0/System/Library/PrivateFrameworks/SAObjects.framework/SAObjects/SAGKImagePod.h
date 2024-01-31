@class NSArray;

@interface SAGKImagePod : SAGKPodView

@property (copy, nonatomic) NSArray *images;

+ (id)imagePodWithDictionary:(id)a0 context:(id)a1;
+ (id)imagePod;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
