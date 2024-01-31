@class NSDate;

@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long audioRecordingSource;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) double sessionDuration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionStartDate:(id)a0;

@end
