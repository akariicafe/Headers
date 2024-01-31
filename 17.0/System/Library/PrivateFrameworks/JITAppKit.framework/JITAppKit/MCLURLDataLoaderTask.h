@class NSString, NSHTTPURLResponse, NSURL, NSMutableData, NSURLRequest, NSError;

@interface MCLURLDataLoaderTask : NSObject {
    id /* block */ _completion;
    id /* block */ _receiveDataHandler;
}

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSString *targetPath;
@property (readonly, nonatomic) NSMutableData *responseData;
@property (readonly, nonatomic) BOOL download;
@property (readonly, nonatomic) BOOL cancelled;
@property (readonly, nonatomic) BOOL responseOk;
@property (readonly, nonatomic) BOOL responseClientError;
@property (readonly, nonatomic) BOOL responseTimeout;
@property (readonly, nonatomic) BOOL cachedResponse;
@property (readonly, nonatomic) BOOL background;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ redirectHandler;

- (void)setRequest:(id)a0;
- (id)contentType;
- (void)setCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setProgress:(float)a0;
- (void)setCachedResponse:(BOOL)a0;
- (void)setCancelled:(BOOL)a0;
- (void)setResponse:(id)a0;
- (id)description;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setResponseData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)receiveDataHandler;
- (void)applyFileExtension:(id)a0;
- (void)applyMimeType;
- (void)dispatchCompletion:(id)a0;
- (id)initWithURLRequest:(id)a0 targetPath:(id)a1 category:(id)a2 completionHandler:(id /* block */)a3 receiveData:(id /* block */)a4;

@end
