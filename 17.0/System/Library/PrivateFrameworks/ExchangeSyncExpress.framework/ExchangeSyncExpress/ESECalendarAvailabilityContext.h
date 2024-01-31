@interface ESECalendarAvailabilityContext : NSObject {
    id /* block */ _resultsBlock;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)initWithResultsBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)resultsReturned:(id)a0;

@end
