@class NSString;

@interface SiriMessageTypes.EndCandidateRequestMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ reason;
}

@property (nonatomic, readonly) NSString *description;

@end
