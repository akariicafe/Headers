@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *objects;
@property (copy, nonatomic) NSArray *resultObjects;

+ (id)addResultObjects;
+ (id)addResultObjectsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
