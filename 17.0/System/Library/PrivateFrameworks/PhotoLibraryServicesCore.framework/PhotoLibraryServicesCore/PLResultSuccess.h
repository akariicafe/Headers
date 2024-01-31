@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)resultWithError:(id *)a0;
- (id)initWithResult:(id)a0;
- (id)result;
- (BOOL)isFailure;
- (id)description;
- (BOOL)isSuccess;
- (void).cxx_destruct;
- (id)error;

@end
