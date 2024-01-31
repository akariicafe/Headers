@class NSArray, NSString, NSData, NSDictionary, NSNumber, NSDate;

@interface CBOR : NSObject <NSCopying>

@property (retain, nonatomic) id value;
@property (nonatomic) long long valueSize;
@property (retain, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long longLongValue;
@property (readonly, nonatomic) unsigned long long unsignedLongLongValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) NSNumber *numeric;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) CBOR *tag;
@property (readonly, nonatomic) BOOL isWholeNumber;
@property (readonly, nonatomic) BOOL isFloatNumber;
@property (readonly, nonatomic) BOOL isBoolean;
@property (readonly, nonatomic) BOOL isDate;

+ (id)decodeFromData:(id)a0;
+ (id)cborWithArray:(id)a0;
+ (id)cborWithData:(id)a0;
+ (id)cborWithDictionary:(id)a0;
+ (id)cborWithFullDate:(id)a0;
+ (id)cborWithInteger:(long long)a0;
+ (id)cborWithUTF8String:(id)a0;
+ (id)cborWithUnsignedInteger:(unsigned long long)a0;
+ (id)cborWithDouble:(double)a0;
+ (id)cborNil;
+ (id)cborFalse;
+ (id)cborTrue;
+ (id)cborWithCOSE:(id)a0;
+ (id)cborWithCOSEKey:(id)a0;
+ (id)cborWithDateTime:(id)a0;
+ (id)cborWithDictionary:(id)a0 keyOrderList:(id)a1;
+ (id)cborWithFloat:(float)a0;
+ (id)cborWithHalfFloat:(float)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asJSON;
- (id)initWithCbor:(id)a0 tag:(id)a1;
- (id)initWithType:(unsigned long long)a0 value:(id)a1 valueSize:(long long)a2 tag:(id)a3;

@end
