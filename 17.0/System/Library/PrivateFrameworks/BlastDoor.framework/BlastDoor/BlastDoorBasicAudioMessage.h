@class NSString, NSAttributedString, NSArray;

@interface BlastDoorBasicAudioMessage : NSObject {
    void /* unknown type, empty encoding */ basicAudioMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSArray *inlineAudioMessages;

- (id)init;
- (void).cxx_destruct;

@end
