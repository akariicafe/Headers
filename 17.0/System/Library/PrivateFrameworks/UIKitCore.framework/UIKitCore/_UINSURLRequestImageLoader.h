@class NSURLRequest, NSURLSessionTask, NSURLSession;

@interface _UINSURLRequestImageLoader : _UIImageLoader {
    NSURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionTask *_task;
}

- (id)_error;
- (void).cxx_destruct;
- (BOOL)_really_cancel;
- (void)_really_loadImage:(id /* block */)a0;
- (id)initWithURLRequest:(id)a0 session:(id)a1;

@end
