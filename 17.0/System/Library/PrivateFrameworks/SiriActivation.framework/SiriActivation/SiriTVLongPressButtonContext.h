@class NSString;

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (nonatomic) BOOL isSourcePTTEligible;
@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier;
@property (nonatomic) unsigned long long remoteType;
@property (nonatomic) BOOL isListening;

+ (BOOL)supportsSecureCoding;

- (BOOL)isPTTEligible;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setSourcePTTEligibility:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
