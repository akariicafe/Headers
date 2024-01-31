@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject {
    NSURLSession *_session;
    NSMutableDictionary *_completionBlocksDict;
}

@property (retain, nonatomic) NSURL *currentURL;
@property (retain, nonatomic) NSMutableDictionary *appScriptDict;
@property (retain, nonatomic) NSURLSessionDataTask *task;

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)fetchAppJavascript:(id)a0 cachePolicy:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
