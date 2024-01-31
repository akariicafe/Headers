@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
    WebNavigationDataPrivate *_private;
}

- (id)originalRequest;
- (void)dealloc;
- (id)response;
- (id)title;
- (id)url;
- (id)clientRedirectSource;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)a0 title:(id)a1 originalRequest:(id)a2 response:(id)a3 hasSubstituteData:(BOOL)a4 clientRedirectSource:(id)a5;

@end
