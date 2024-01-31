@class NSString;

@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ experiences;
    void /* unknown type, empty encoding */ clientResults;
    void /* unknown type, empty encoding */ conversationContext;
    void /* unknown type, empty encoding */ metadataDomainName;
    void /* unknown type, empty encoding */ renderedTexts;
    void /* unknown type, empty encoding */ pegasusDomainFlowStepLog;
    void /* unknown type, empty encoding */ taskStepLogs;
    void /* unknown type, empty encoding */ pegasusDomainUserSensitiveTier1Log;
    void /* unknown type, empty encoding */ userSensitiveTier1Logs;
    void /* unknown type, empty encoding */ listenAfterSpeaking;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ isHandledByPreflight;
    void /* unknown type, empty encoding */ preflightClientHandlerIdentifier;
    void /* unknown type, empty encoding */ isPersonalDomainFallback;
    void /* unknown type, empty encoding */ requestCountryCode;
    void /* unknown type, empty encoding */ searchReason;
    void /* unknown type, empty encoding */ pommesCandidateId;
    void /* unknown type, empty encoding */ componentsWarmedUp;
    void /* unknown type, empty encoding */ isCachedResponse;
    void /* unknown type, empty encoding */ $__lazy_storage_$__computedPrimaryQueryConfidence;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
