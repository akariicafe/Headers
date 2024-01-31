@protocol SiriTTSHTMLSAXParserDelegate;

@interface SiriTTSHTMLSAXParser : NSObject

@property (weak, nonatomic) id<SiriTTSHTMLSAXParserDelegate> delegate;

+ (void)initialize;

- (void)parse:(id)a0;
- (void).cxx_destruct;

@end
