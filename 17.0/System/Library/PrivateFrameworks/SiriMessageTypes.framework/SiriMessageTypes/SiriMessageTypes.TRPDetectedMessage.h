@class NSString;

@interface SiriMessageTypes.TRPDetectedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ lastTRPCandidateId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
