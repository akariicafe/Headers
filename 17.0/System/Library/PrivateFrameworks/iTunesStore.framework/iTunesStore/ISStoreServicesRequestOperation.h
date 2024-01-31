@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest *_request;
}

@property (readonly) SSRequest *request;

- (void)run;
- (void)dealloc;
- (id)initWithRequest:(id)a0;
- (void)cancel;

@end
