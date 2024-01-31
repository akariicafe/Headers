@class SAUIRequestEndBehavior, NSArray, NSString, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *dialogs;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (retain, nonatomic) SAUIRequestEndBehavior *requestEndBehavior;
@property (copy, nonatomic) NSString *responseMode;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
