@class CNContactStore, NSString;
@protocol CNScheduler;

@interface CNAutocompletePredictionSearch : NSObject <CNAutocompleteSearch> {
    id<CNScheduler> _scheduler;
}

@property (class, readonly) unsigned long long predictedResultLimit;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)predictionStrategyForRequest:(id)a0;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)suggestionsForRequest:(id)a0;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)strategyForRequest:(id)a0;

@end
