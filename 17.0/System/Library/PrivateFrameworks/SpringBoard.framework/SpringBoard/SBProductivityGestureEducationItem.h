@class NSMutableDictionary, NSDate;

@interface SBProductivityGestureEducationItem : NSObject <NSSecureCoding, NSCopying> {
    NSDate *_displayDate;
    NSMutableDictionary *_activationHistoryMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long lastActivatedEducationType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_policyInterval;
- (long long)_policyCount;
- (void)contentDidAppear;
- (BOOL)isValidWithActivationForType:(long long)a0;
- (void)resetActivations;

@end
