@class NSString, NSUUID;

@interface CMIOExtensionStreamCustomClockConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clockName;
@property (readonly) NSUUID *sourceIdentifier;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } getTimeCallMinimumInterval;
@property (readonly) unsigned int numberOfEventsForRateSmoothing;
@property (readonly) unsigned int numberOfAveragesForRateSmoothing;

+ (id)customClockConfigurationWithClockName:(id)a0 sourceIdentifier:(id)a1 getTimeCallMinimumInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 numberOfEventsForRateSmoothing:(unsigned int)a3 numberOfAveragesForRateSmoothing:(unsigned int)a4;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCDictionary;
- (id)initWithClockName:(id)a0 sourceIdentifier:(id)a1 getTimeCallMinimumInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 numberOfEventsForRateSmoothing:(unsigned int)a3 numberOfAveragesForRateSmoothing:(unsigned int)a4;

@end
