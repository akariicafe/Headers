@class NSArray;

@interface MSDKPeerDemoGKResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enrollmentResult;
@property (retain, nonatomic) NSArray *residualErrors;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEnrollmentResult:(BOOL)a0 andResidualErrors:(id)a1;

@end
