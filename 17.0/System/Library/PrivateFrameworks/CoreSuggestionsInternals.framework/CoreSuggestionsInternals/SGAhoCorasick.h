@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (id)init;
- (id)initWithBytecode:(id)a0;
- (void).cxx_destruct;
- (BOOL)existsInString:(id)a0;

@end
