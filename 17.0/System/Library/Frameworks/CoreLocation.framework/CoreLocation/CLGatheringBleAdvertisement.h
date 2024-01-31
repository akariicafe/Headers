@class NSData, NSString;

@interface CLGatheringBleAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSString *contactId;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) long long eFlags;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (readonly, copy, nonatomic) NSData *iTag;
@property (readonly, nonatomic) long long rssi;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) double unixTime;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedBytes;
- (id)getDateString:(double)a0;
- (id)hexString:(id)a0;
- (id)initWithAddress:(id)a0 contactId:(id)a1 flags:(long long)a2 eFlags:(long long)a3 authTag:(id)a4 iTag:(id)a5 rssi:(long long)a6 count:(long long)a7 unixTime:(double)a8;
- (id)initWithAddress:(id)a0 withAuthTag:(id)a1 withRssi:(long long)a2 withCount:(long long)a3 withTime:(double)a4;
- (id)initWithPersistenceBytes:(struct { double x0; unsigned char x1[6]; char x2[42]; int x3; int x4; int x5; int x6; short x7; short x8; } *)a0;

@end
