@class NSData;

@interface NFResponseAPDU : NSObject

@property (readonly, nonatomic) unsigned short status;
@property (readonly, nonatomic) NSData *response;
@property (readonly, nonatomic) NSData *data;

+ (id)responseWithData:(id)a0;

- (unsigned short)decodeUnderlyingAppletError:(id *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
