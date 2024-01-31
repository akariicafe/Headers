@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (void)close;
- (id)init;
- (id)readData;
- (id)initWithData:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;

@end
