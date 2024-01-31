@class NSData, NSHTTPURLResponse;

@interface SUUIURLResolverResponse : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 URLResponse:(id)a1;

@end
