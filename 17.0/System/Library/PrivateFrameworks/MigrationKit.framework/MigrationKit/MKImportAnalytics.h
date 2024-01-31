@class NSString;

@interface MKImportAnalytics : NSObject {
    NSString *_contentType;
}

+ (void)initialize;

- (void)send:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentType:(long long)a0;
- (void)complete:(BOOL)a0;
- (void)send:(id)a0 extension:(id)a1;

@end
