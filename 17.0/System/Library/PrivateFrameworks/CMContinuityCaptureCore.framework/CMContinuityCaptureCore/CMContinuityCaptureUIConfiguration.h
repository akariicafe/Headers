@class NSString, NSNumber;

@interface CMContinuityCaptureUIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) long long clientDeviceModel;
@property (nonatomic) long long compositeState;
@property (copy, nonatomic) NSNumber *placementStepSkipped;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
