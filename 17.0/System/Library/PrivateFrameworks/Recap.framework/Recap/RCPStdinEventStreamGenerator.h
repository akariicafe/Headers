@class NSMutableString, NSMutableArray, NSInputStream;

@interface RCPStdinEventStreamGenerator : NSObject {
    NSInputStream *_stdin;
    NSMutableArray *_commandBuffer;
    NSMutableString *_stringBuffer;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)nextEventStream;
- (BOOL)_processBuffer;

@end
