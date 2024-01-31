@class NSNumber, NSString, SAUIAudioData;

@interface SAUIPlayAudio : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *fadeInDuration;
@property (copy, nonatomic) NSNumber *fadeOutDuration;
@property (copy, nonatomic) NSString *hapticLibraryKey;
@property (retain, nonatomic) SAUIAudioData *itemData;
@property (copy, nonatomic) NSString *itemURL;
@property (copy, nonatomic) NSNumber *numberOfLoops;
@property (copy, nonatomic) NSNumber *toneLibraryAlertType;
@property (copy, nonatomic) NSNumber *volume;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
