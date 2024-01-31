@interface DAEGrantedDelegatesListContext : NSObject {
    id /* block */ _resultsBlock;
}

- (void).cxx_destruct;
- (void)finishedWithResults:(id)a0 error:(id)a1;
- (id)initWithResultsBlock:(id /* block */)a0;

@end
