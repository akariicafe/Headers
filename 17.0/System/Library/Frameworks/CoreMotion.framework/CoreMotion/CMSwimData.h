@class NSUUID, NSDate;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fStrokeCount;
    double fDistance;
    double fAvgPace;
    unsigned long long fLapCount;
    long long fStrokeType;
    unsigned long long fSegment;
    double fSWOLF;
    double fSegmentSWOLF;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long strokeCount;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double avgPace;
@property (readonly, nonatomic) unsigned long long lapCount;
@property (readonly, nonatomic) long long strokeType;
@property (readonly, nonatomic) unsigned long long segment;
@property (readonly, nonatomic) double SWOLF;
@property (readonly, nonatomic) double segmentSWOLF;

+ (id)strokeTypeName:(long long)a0;
+ (unsigned long long)maxSwimDataEntries;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)convertToSwimEntry:(struct CLSwimEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; double x4; double x5; double x6; double x7; double x8; int x9; int x10; int x11; int x12; float x13; float x14; float x15; int x16; int x17; double x18; double x19; int x20; } *)a0;
- (id)initWithRecordId:(unsigned long long)a0 sourceId:(id)a1 sessionId:(id)a2 startDate:(id)a3 endDate:(id)a4 strokeCount:(unsigned long long)a5 distance:(double)a6 avgPace:(double)a7 lapCount:(unsigned long long)a8 strokeType:(long long)a9 segment:(unsigned long long)a10 SWOLF:(double)a11 segmentSWOLF:(double)a12;
- (id)initWithSessionId:(id)a0;
- (id)initWithSwimEntry:(const struct CLSwimEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; double x4; double x5; double x6; double x7; double x8; int x9; int x10; int x11; int x12; float x13; float x14; float x15; int x16; int x17; double x18; double x19; int x20; } *)a0;
- (BOOL)isSWOLFValid;
- (BOOL)isSegmentSWOLFValid;

@end
