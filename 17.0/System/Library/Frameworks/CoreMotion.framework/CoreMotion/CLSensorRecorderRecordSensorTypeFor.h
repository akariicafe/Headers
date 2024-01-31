@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double duration;
@property int dataType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
