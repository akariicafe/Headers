@class NSData;

@interface NFCISO7816APDU : NSObject <NSCopying> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _payloadOffset;
    long long _le;
    NSData *_fullPacket;
}

@property (readonly, nonatomic) unsigned char instructionClass;
@property (readonly, nonatomic) unsigned char instructionCode;
@property (readonly, nonatomic) unsigned char p1Parameter;
@property (readonly, nonatomic) unsigned char p2Parameter;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) long long expectedResponseLength;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)asData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInstructionClass:(unsigned char)a0 instructionCode:(unsigned char)a1 p1Parameter:(unsigned char)a2 p2Parameter:(unsigned char)a3 data:(id)a4 expectedResponseLength:(long long)a5;

@end
