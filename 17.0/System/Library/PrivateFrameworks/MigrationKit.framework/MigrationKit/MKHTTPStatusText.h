@class NSDictionary;

@interface MKHTTPStatusText : NSObject {
    NSDictionary *_statusTexts;
}

+ (id)sharedInstance;
+ (id)statusText:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)statusText:(unsigned long long)a0;

@end
