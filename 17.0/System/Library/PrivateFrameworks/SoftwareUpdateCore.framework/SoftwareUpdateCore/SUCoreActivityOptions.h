@class NSNumber, NSDate;

@interface SUCoreActivityOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *runDate;
@property (retain, nonatomic) NSNumber *batteryLevelGreaterThan;
@property (retain, nonatomic) NSNumber *batteryLevelLessThan;
@property (nonatomic) int plugInState;
@property (nonatomic) int screenOnState;
@property (nonatomic) int networkState;
@property (nonatomic) int wifiState;
@property (nonatomic) int waking;
@property (nonatomic) int phoneCallState;
@property (nonatomic) int carplayState;
@property (nonatomic) int mediaPlayingState;
@property (nonatomic) int priority;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForPriority:(int)a0;
- (id)_stringForTriState:(int)a0;

@end
