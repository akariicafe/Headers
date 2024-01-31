@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (retain, nonatomic) SASyncAnchor *current;

+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
