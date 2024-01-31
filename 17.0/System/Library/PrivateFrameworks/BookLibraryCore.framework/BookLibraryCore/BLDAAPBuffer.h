@class NSData;

@interface BLDAAPBuffer : NSObject

@property (readonly, nonatomic) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (long long)appendHeader:(unsigned int)a0 size:(unsigned int)a1;
- (long long)appendUInt32:(unsigned int)a0 withCode:(unsigned int)a1;
- (long long)appendUInt64:(unsigned long long)a0 withCode:(unsigned int)a1;
- (long long)appendUInt8:(unsigned char)a0 withCode:(unsigned int)a1;

@end
