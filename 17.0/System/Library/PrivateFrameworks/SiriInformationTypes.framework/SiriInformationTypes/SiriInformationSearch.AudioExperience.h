@interface SiriInformationSearch.AudioExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ serverAudioResults;
    void /* unknown type, empty encoding */ isGlideEligible;
    void /* unknown type, empty encoding */ networkAvailableAtRequest;
    void /* unknown type, empty encoding */ audioUnderstanding;
    void /* unknown type, empty encoding */ parse;
    void /* unknown type, empty encoding */ playbackSignals;
    void /* unknown type, empty encoding */ internalSignals;
    void /* unknown type, empty encoding */ pegasusAudioType;
    void /* unknown type, empty encoding */ launchID;
    void /* unknown type, empty encoding */ systemExtensionBundleID;
    void /* unknown type, empty encoding */ boltProxiedBundleID;
    void /* unknown type, empty encoding */ shouldPerformAppSelection;
    void /* unknown type, empty encoding */ audioClientComponent;
    void /* unknown type, empty encoding */ matchingSpans;
    void /* unknown type, empty encoding */ multiUserContext;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
