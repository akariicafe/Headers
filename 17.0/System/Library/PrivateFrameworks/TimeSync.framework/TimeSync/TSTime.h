@class TSgPTPTime, TSGPSTime, NSDate;

@interface TSTime : NSObject <NSCopying> {
    BOOL _initedWithgPTP;
    unsigned long long _grandmasterIdentity;
    unsigned short _localPortNumber;
    BOOL _timeTraceable;
    BOOL _frequencyTraceable;
}

@property (readonly, nonatomic) unsigned long long nanosecondsSinceEpoch;
@property (readonly, copy, nonatomic) NSDate *utcDate;
@property (readonly, copy, nonatomic) NSDate *taiDate;
@property (readonly, copy, nonatomic) TSGPSTime *gpsTime;
@property (readonly, copy, nonatomic) TSgPTPTime *gPTPTime;

+ (id)timeConverter;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)utcDate;
- (id)taiDate;
- (id)gpsTime;
- (id)gPTPTime;
- (id)initWithGPSTime:(id)a0;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)a0;
- (id)initWithTAIDate:(id)a0;
- (id)initWithUTCDate:(id)a0;
- (id)initWithgPTPTime:(id)a0;
- (long long)nanosecondsSinceTime:(id)a0;
- (id)timeByAddingNanoseconds:(long long)a0;

@end
