@class NSArray;

@interface B2PDataSessionDiscoveryResponse : B2PResponse

@property (readonly) NSArray *entries;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRoute:(unsigned char)a0 status:(int)a1 data:(id)a2;
- (BOOL)parseResponse:(id)a0;

@end
