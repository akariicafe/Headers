@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)close;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)writeData:(id)a0;

@end
