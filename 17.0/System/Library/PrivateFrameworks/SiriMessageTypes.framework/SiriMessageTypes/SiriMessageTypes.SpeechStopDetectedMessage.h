@class NSString;

@interface SiriMessageTypes.SpeechStopDetectedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ lastTRPId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
