@class NSData, CATAddress;

@interface CATEndPoint : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CATAddress *address;
@property (readonly, nonatomic) unsigned int port;

- (id)init;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddress:(id)a0 port:(unsigned int)a1;
- (BOOL)isEqualToEndPoint:(id)a0;

@end
