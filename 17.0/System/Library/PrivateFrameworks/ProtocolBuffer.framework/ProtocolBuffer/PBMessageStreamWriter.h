@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {
    NSOutputStream *_stream;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (BOOL)writeMessage:(id)a0;

@end
