@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void)write:(id)a0;
- (id)initWithURL:(id)a0;
- (id)init;
- (id)description;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)payloadAsOriginalURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 baseURL:(id)a1;
- (id)payloadAsFullURL;

@end
