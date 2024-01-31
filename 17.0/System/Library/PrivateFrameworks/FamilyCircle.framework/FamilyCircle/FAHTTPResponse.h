@class NSHTTPURLResponse;

@interface FAHTTPResponse : NSObject

@property (nonatomic) BOOL familyRefreshTriggered;
@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) id body;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 body:(id)a1;
- (id)initWithHTTPResponse:(id)a0 body:(id)a1 familyRefreshTriggered:(BOOL)a2;

@end
