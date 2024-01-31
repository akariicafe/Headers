@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
    ISOpenURLRequest *_request;
}

@property (readonly) ISOpenURLRequest *openURLRequest;

- (BOOL)_openURL:(id)a0;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (id)initWithOpenURLRequest:(id)a0;
- (id)_newSortedTargetsArray;

@end
