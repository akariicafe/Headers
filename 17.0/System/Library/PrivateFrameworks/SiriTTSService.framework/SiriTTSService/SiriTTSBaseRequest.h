@class NSURL, NSString, NSUUID;

@interface SiriTTSBaseRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requestCreatedTime;
    void /* unknown type, empty encoding */ clientBundleId;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ outputPath;
    void /* unknown type, empty encoding */ sandboxToken;
    void /* unknown type, empty encoding */ logLinkId;
    void /* unknown type, empty encoding */ didReportInstrument;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) NSString *sandboxToken;
@property (nonatomic, copy) NSUUID *logLinkId;
@property (nonatomic, copy) id /* block */ didReportInstrument;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
