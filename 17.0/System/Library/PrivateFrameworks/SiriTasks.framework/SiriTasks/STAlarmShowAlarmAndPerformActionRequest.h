@class STAlarmAction;

@interface STAlarmShowAlarmAndPerformActionRequest : AFSiriRequest {
    STAlarmAction *_action;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithAction:(id)a0;

@end
