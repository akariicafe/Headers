@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)close;
- (void)dealloc;
- (void)appendString:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;

@end
