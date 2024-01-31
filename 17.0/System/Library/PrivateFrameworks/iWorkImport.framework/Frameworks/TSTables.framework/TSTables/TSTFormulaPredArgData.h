@class NSString, NSNumber, NSDate;

@interface TSTFormulaPredArgData : NSObject <NSCopying> {
    struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimal;
    unsigned char _units;
}

@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long year;
@property (readonly, nonatomic) long long month;
@property (readonly, nonatomic) long long day;
@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) double durationValue;
@property (readonly, nonatomic) unsigned char durationUnits;
@property (readonly) struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned short x3; BOOL x4; } duration;

+ (id)getPredArgDataFromCell:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDouble:(double)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBool:(BOOL)a0;
- (id)initWithNumber:(id)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0;
- (id)initWithDuration:(double)a0 units:(unsigned char)a1;

@end
