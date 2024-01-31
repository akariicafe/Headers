@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property BOOL printedICS;
@property int logCount;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)currentToken;
- (int)tokenType;
- (id)nextToken;
- (id)initWithCompressedData:(id)a0;
- (BOOL)consumeEscaped:(const char *)a0;
- (void)consumePropName;
- (BOOL)consumeChar:(char)a0;
- (BOOL)consumeEOL;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;
- (void)consumeWhiteSpace;

@end
