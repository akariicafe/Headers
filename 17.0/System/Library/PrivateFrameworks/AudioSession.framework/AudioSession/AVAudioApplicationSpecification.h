@class NSString;

@interface AVAudioApplicationSpecification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long audioAppType;
@property (nonatomic) struct { unsigned int val[8]; } appAuditToken;
@property (retain, nonatomic) NSString *attributionBundleID;
@property (retain, nonatomic) NSString *processName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
