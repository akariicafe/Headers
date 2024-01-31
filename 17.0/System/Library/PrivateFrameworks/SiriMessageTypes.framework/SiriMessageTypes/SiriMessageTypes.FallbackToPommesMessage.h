@interface SiriMessageTypes.FallbackToPommesMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ delegatedUserDialogActs;
    void /* unknown type, empty encoding */ fallbackReason;
    void /* unknown type, empty encoding */ pommesCandidateId;
}

- (void).cxx_destruct;

@end
