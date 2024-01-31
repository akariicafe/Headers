@class NSURLRequest;

@interface FBKBoxedRequest : NSObject

@property (retain, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 successBlock:(id /* block */)a1 errorBlock:(id /* block */)a2;

@end
