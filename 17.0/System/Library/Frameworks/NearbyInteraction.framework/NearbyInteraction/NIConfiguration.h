@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (id)init;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)initInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
