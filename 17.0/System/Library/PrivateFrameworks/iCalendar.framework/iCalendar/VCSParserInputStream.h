@class NSData;

@interface VCSParserInputStream : NSObject {
    NSData *_dataStream;
    BOOL _discardBuffer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _buffer;
    int _currentLineNum;
    unsigned int _seek;
}

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (int)lineNum;
- (id)errorStr:(unsigned long long)a0;
- (unsigned long long)getLine:(char *)a0 withSize:(unsigned long long *)a1;
- (BOOL)isContinued;
- (unsigned long long)loadLineBuffer;

@end
