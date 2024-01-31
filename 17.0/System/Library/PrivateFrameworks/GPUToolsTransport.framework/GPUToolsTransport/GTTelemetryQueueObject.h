@class GTTelemetryRecordObject;

@interface GTTelemetryQueueObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long commits;
@property (retain, nonatomic) GTTelemetryRecordObject *gpuTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
