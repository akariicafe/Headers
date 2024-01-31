@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject {
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;

- (void)_preprocessWithContext:(id)a0 string:(id *)a1;
- (void)parseContext:(id)a0;

@end
