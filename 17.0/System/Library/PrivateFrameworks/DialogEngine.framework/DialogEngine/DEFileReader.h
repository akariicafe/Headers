@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (void)close;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;

@end
