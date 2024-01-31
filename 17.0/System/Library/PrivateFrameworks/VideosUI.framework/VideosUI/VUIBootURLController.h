@class NSURL;

@interface VUIBootURLController : NSObject

@property (retain, nonatomic) NSURL *localAppURL;

- (id)init;
- (void).cxx_destruct;
- (void)fetchBootURLWithCompletionHandler:(id /* block */)a0;
- (void)fetchBootURLWithUserDefaults:(id)a0 bootURLKey:(id)a1 bagURLKey:(id)a2 bundle:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithLocalAppURL:(id)a0;

@end
