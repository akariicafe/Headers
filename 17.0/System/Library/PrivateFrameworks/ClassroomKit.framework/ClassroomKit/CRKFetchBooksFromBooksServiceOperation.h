@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)init;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;

@end
