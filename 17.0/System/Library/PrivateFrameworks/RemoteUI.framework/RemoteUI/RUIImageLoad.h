@class NSURL, NSURLSessionDataTask, NSURLSession;

@interface RUIImageLoad : NSObject {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_dataTask;
}

@property (copy, nonatomic) NSURL *URL;

- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (BOOL)receivedValidResponse:(id)a0;

@end
