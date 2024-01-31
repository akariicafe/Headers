@interface NewsPersonalization.NewsTabiJournaler : NSObject <FCOperationThrottlerDelegate> {
    void /* unknown type, empty encoding */ directory;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ evictionThrottler;
    void /* unknown type, empty encoding */ queue;
}

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
