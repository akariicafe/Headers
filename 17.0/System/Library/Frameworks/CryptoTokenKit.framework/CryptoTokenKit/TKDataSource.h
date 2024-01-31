@class NSData;

@interface TKDataSource : NSObject {
    NSData *_data;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (unsigned char)fetchByte;
- (id)initWithData:(id)a0;
- (id)dataFromPtr:(const char *)a0;
- (BOOL)bytesSafeToRead:(long long)a0;
- (void).cxx_destruct;
- (id)fetchDataWithLength:(long long)a0;

@end
