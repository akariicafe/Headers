@class NSString, KTLoggableData;

@interface TransparencyCloudDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) KTLoggableData *loggableData;
@property (retain) NSString *state;
@property (retain) NSString *serialNumber;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
