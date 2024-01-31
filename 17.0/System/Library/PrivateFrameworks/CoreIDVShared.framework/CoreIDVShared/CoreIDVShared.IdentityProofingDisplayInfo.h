@interface CoreIDVShared.IdentityProofingDisplayInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ proofingUI;
    void /* unknown type, empty encoding */ docScan;
    void /* unknown type, empty encoding */ attributeConfig;
    void /* unknown type, empty encoding */ learnMoreURL;
    void /* unknown type, empty encoding */ waitingForWiFiAlertDataThresholdInBytes;
    void /* unknown type, empty encoding */ lowDataModeAlertDataThresholdInBytes;
    void /* unknown type, empty encoding */ idType;
    void /* unknown type, empty encoding */ featureEnablementConfig;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
