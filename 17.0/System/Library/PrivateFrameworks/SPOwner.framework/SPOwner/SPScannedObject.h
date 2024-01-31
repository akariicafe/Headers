@class SPIndexInformation, NSData, NSDate, NSNumber, SPAccessoryInformation;

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *advertisement;
@property (nonatomic) unsigned char status;
@property (nonatomic) unsigned char ek;
@property (nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSNumber *hint;
@property (readonly, copy, nonatomic) NSData *optional;
@property (readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation;
@property (readonly, copy, nonatomic) SPIndexInformation *indexInformation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScanDate:(id)a0 address:(id)a1 advertisement:(id)a2 status:(unsigned char)a3 ek:(unsigned char)a4 hint:(id)a5 rssi:(long long)a6 indexInformation:(id)a7 acccessoryInformation:(id)a8;

@end
