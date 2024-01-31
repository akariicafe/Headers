@class NSURLSessionTaskMetrics;

@interface AVAssetCustomURLRequest : NSObject {
    struct __CFDictionary { } *_customURLRequest;
    struct __CFDictionary { } *_customURLResponse;
}

@property (readonly, nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;

+ (id)requestWithRequest:(struct __CFDictionary { } *)a0 id:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (struct __CFDictionary { } *)customURLRequest;
- (struct __CFDictionary { } *)customURLResponse;
- (id)initWithRequest:(struct __CFDictionary { } *)a0 id:(unsigned long long)a1;
- (void)setCustomURLRequest:(struct __CFDictionary { } *)a0;
- (void)setCustomURLResponse:(struct __CFDictionary { } *)a0;

@end
