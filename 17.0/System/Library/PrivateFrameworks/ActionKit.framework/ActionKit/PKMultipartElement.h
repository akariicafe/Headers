@class NSData, NSInputStream;

@interface PKMultipartElement : NSObject

@property (retain, nonatomic) NSData *headers;
@property (retain, nonatomic) NSInputStream *body;
@property (nonatomic) unsigned long long headersLength;
@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long delivered;

- (unsigned long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)appendNewLine:(id)a0;
- (id)initWithHeaders:(id)a0 path:(id)a1 boundary:(id)a2;
- (id)initWithHeaders:(id)a0 string:(id)a1 boundary:(id)a2;
- (id)initWithName:(id)a0 boundary:(id)a1 data:(id)a2 contentType:(id)a3;
- (id)initWithName:(id)a0 boundary:(id)a1 data:(id)a2 contentType:(id)a3 filename:(id)a4;
- (id)initWithName:(id)a0 boundary:(id)a1 string:(id)a2;
- (id)initWithName:(id)a0 filename:(id)a1 boundary:(id)a2 path:(id)a3;
- (id)initWithName:(id)a0 filename:(id)a1 boundary:(id)a2 path:(id)a3 contentType:(id)a4;
- (id)initWithName:(id)a0 filename:(id)a1 boundary:(id)a2 stream:(id)a3 streamLength:(unsigned long long)a4;
- (id)makeHeadersDataFromHeadersDict:(id)a0 boundary:(id)a1;
- (void)updateLength;

@end
