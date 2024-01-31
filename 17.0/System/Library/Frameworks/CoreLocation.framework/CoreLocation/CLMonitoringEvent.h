@class NSString, CLCondition, NSDate;

@interface CLMonitoringEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) CLCondition *refinement;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) NSDate *date;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)setState:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 refinement:(id)a1 state:(unsigned long long)a2 date:(id)a3;

@end
