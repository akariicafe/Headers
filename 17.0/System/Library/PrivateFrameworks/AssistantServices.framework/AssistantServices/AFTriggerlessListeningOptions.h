@interface AFTriggerlessListeningOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL showUIDuringListening;
@property (nonatomic) BOOL playAlertBeforeListening;
@property (readonly, nonatomic) BOOL showUIBeforeListening;
@property (readonly, nonatomic) BOOL beepBeforeListening;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double endpointDelay;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithShowUIDuringListening:(BOOL)a0 playAlertBeforeListening:(BOOL)a1;

@end
