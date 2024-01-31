@class NSUUID, SMHandle, NSDate, SMSessionDestination, SMSessionTime;

@interface SMSessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SMHandle *handle;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) SMSessionTime *time;
@property (readonly, nonatomic) SMSessionDestination *destination;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *userResponseSafeDate;
@property (nonatomic) BOOL sessionSupportsHandoff;

+ (BOOL)configurationIsValid:(id)a0;
+ (id)sessionTypeToString:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSimilar:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)outputToDictionary;
- (id)initRoundTripSessionConfigurationWithHandle:(id)a0 sessionID:(id)a1 destination:(id)a2 sessionStartDate:(id)a3 userResponseSafeDate:(id)a4 sessionSupportsHandoff:(BOOL)a5;
- (id)initDestinationBoundSessionConfigurationWithHandle:(id)a0 sessionID:(id)a1 destination:(id)a2 sessionStartDate:(id)a3 userResponseSafeDate:(id)a4 sessionSupportsHandoff:(BOOL)a5;
- (id)initTimeBoundSessionConfigurationWithHandle:(id)a0 sessionID:(id)a1 time:(id)a2 sessionStartDate:(id)a3 sessionSupportsHandoff:(BOOL)a4;
- (id)initTimeBoundSessionConfigurationWithHandle:(id)a0 sessionID:(id)a1 time:(id)a2 sessionSupportsHandoff:(BOOL)a3;
- (id)initWithHandle:(id)a0 sessionID:(id)a1 sessionStartDate:(id)a2 sessionType:(unsigned long long)a3 time:(id)a4 destination:(id)a5 userResponseSafeDate:(id)a6 sessionSupportsHandoff:(BOOL)a7;

@end
