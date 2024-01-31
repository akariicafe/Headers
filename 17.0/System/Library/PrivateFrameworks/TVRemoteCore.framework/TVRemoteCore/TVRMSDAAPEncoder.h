@class NSMutableData;

@interface TVRMSDAAPEncoder : NSObject

@property (readonly, nonatomic) NSMutableData *data;

- (id)init;
- (void).cxx_destruct;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forCode:(unsigned int)a2;
- (void)encodeData:(id)a0 forCode:(unsigned int)a1;
- (void)encodeInt32:(int)a0 forCode:(unsigned int)a1;
- (void)encodeInt64:(long long)a0 forCode:(unsigned int)a1;
- (void)encodeString:(id)a0 forCode:(unsigned int)a1;

@end
