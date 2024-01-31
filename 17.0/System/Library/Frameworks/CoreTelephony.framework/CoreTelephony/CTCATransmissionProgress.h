@class NSString, NSNumber, NSDate;

@interface CTCATransmissionProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSDate *startedAt;
@property (retain, nonatomic) NSNumber *estimatedDurationSeconds;
@property (retain, nonatomic) NSNumber *progressPercents;
@property (nonatomic) long long payloadType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
