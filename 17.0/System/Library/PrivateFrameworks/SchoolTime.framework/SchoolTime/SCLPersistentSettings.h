@class SCLScheduleSettings;

@interface SCLPersistentSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, getter=isManualSchoolModeEnabled) BOOL manualSchoolModeEnabled;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
