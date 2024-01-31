@class NSNumber;

@interface DKDiagnosticProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *fractionCompleted;
@property (readonly, nonatomic) NSNumber *estimatedTimeRemaining;
@property (readonly, nonatomic) BOOL isIndeterminate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_validateProperties;
- (id)initWithProgress:(id)a0;

@end
