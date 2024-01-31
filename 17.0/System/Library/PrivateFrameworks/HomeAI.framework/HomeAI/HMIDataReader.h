@class NSData;

@interface HMIDataReader : NSObject {
    NSData *_data;
    unsigned long long _position;
}

- (unsigned long long)position;
- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (id)readData:(unsigned long long)a0;
- (void)seek:(unsigned long long)a0;

@end
