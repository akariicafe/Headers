@class NSSmartQuoteOptions;
@protocol NSSmartPunctuationClient;

@interface NSSmartPunctuationController : NSObject {
    id<NSSmartPunctuationClient> _client;
    NSSmartQuoteOptions *_options;
    unsigned long long _types;
}

@property id<NSSmartPunctuationClient> client;
@property (copy) NSSmartQuoteOptions *smartQuoteOptions;
@property BOOL smartQuotesEnabled;
@property BOOL smartDashesEnabled;

- (id)init;
- (void)dealloc;
- (void)clientDidReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 changeInLength:(long long)a1;

@end
