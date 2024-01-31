@class NSString, NSArray, NSDate;

@interface HAECGSample : NSObject

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) float frequency;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *ecgData;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)decodeHALV1Payload:(const struct { unsigned char x0; unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned long long x5; struct { unsigned int x0; unsigned char x1; unsigned char x2; } x6; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; short x4; int x5; } x7[16]; } *)a0 withMetadata:(id)a1;
- (id)decodeHALV2Payload:(const struct { unsigned char x0; unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned long long x5; struct { unsigned int x0; unsigned int x1; unsigned char x2; unsigned char x3; int x4; int x5; unsigned char x6; unsigned char x7; } x6; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; short x4; short x5; int x6; int x7; int x8; } x7[16]; } *)a0 withMetadata:(id)a1 withPayloadVersion2:(BOOL)a2;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1;
- (BOOL)parseRepresentation:(id)a0 withMetadata:(id)a1;
- (void)setTimestampWithRtpTicks:(unsigned long long)a0 withMetadata:(id)a1;

@end
