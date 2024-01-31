@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject <NSCopying>

@property (readonly, nonatomic) struct GEOSessionID { unsigned long long _high; unsigned long long _low; } sessionID;
@property (readonly, nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double sessionCreationTime;
@property (readonly, nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) NSString *sessionEntityString;
@property (readonly, nonatomic) NSString *sessionIDString;
@property (readonly, nonatomic) NSString *sessionUUIDString;
@property (readonly, nonatomic) NSNumber *sessionIDLow;
@property (readonly, nonatomic) NSNumber *sessionIDHigh;
@property (readonly, nonatomic) NSString *sessionIDLowString;
@property (readonly, nonatomic) NSString *sessionIDHighString;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isValidSessionIDHighOrLowString:(id)a0;
- (id)initWithSessionEntityString:(id)a0;
- (id)initWithSessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0 sessionCreationTime:(double)a1 sequenceNumber:(unsigned int)a2;
- (double)sessionRelativeTimestampForEventTime:(double)a0;
- (void)updateSessionIDFromUUIDString:(id)a0;
- (void)updateWithSessionEntityString:(id)a0;

@end
