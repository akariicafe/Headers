@interface BLTAVUtil : NSObject

+ (void)_transcodeVideoAsync:(id)a0 outURL:(id)a1 maxBytes:(unsigned long long)a2 completionHandler:(id /* block */)a3;
+ (void)transcodeURL:(id)a0 outURL:(id)a1 maxBytes:(unsigned long long)a2 completion:(id /* block */)a3;

@end
