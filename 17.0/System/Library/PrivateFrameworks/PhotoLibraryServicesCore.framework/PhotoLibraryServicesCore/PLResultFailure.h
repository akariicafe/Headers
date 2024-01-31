@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)resultWithError:(id *)a0;
- (id)initWithError:(id)a0;
- (id)result;
- (BOOL)isFailure;
- (id)description;
- (BOOL)isSuccess;
- (void).cxx_destruct;
- (id)error;

@end
