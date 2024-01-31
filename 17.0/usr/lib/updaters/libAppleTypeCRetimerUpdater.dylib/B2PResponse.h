@class NSData;

@interface B2PResponse : NSObject

@property (readonly) unsigned short opCode;
@property (readonly) unsigned char route;
@property (readonly) int status;
@property (readonly) unsigned short opCodeField;
@property (readonly) NSData *data;

- (id)init;
- (id)description;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 status:(int)a2;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 status:(int)a2 data:(id)a3;
- (BOOL)parseResponse:(id)a0;

@end
