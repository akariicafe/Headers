@class NSString;

@interface SiriMessageTypes.StartSpeechDictationRequestMessage : SiriMessageTypes.StartRequestMessageBase {
    void /* unknown type, empty encoding */ dictationOptions;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;

@end
