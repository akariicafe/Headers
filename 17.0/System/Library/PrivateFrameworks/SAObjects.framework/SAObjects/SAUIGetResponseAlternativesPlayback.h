@class SAUIGetResponseAlternatives;

@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIGetResponseAlternatives *playbackCommand;

+ (id)getResponseAlternativesPlayback;
+ (id)getResponseAlternativesPlaybackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
