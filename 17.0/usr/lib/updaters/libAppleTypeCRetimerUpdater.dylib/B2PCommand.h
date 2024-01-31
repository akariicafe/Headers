@class NSData;

@interface B2PCommand : NSObject {
    unsigned short _opCode;
}

@property (readonly) unsigned short opCode;
@property (readonly) NSData *data;
@property unsigned char route;

- (id)init;
- (id)description;
- (BOOL)parseCommand:(id)a0;
- (id)initWithOpCode:(unsigned short)a0;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;

@end
