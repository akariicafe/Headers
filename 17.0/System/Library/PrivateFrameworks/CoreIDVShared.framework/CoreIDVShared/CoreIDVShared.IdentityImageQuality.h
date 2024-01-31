@interface CoreIDVShared.IdentityImageQuality : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontScanSettings;
    void /* unknown type, empty encoding */ backScanSettings;
    void /* unknown type, empty encoding */ frontIDSettings;
    void /* unknown type, empty encoding */ backIDSettings;
    void /* unknown type, empty encoding */ selfieSettings;
    void /* unknown type, empty encoding */ livenessSettings;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ bufferSize;
    void /* unknown type, empty encoding */ blurWindow;
    void /* unknown type, empty encoding */ idScanFrameRate;
    void /* unknown type, empty encoding */ videoFrameRate;
    void /* unknown type, empty encoding */ resizeDimensions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
