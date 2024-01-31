@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (id)host;
- (BOOL)isValid;
- (id)scheme;
- (BOOL)matchesURL:(id)a0;
- (id)initWithPatternString:(id)a0;
- (BOOL)matchesSubdomains;

@end
