@class NSString;

@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *streamId;

+ (id)speechSynthesisStreaming;
+ (id)speechSynthesisStreamingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
