@class NSMutableDictionary;

@interface PNRPhoneNumberResolutionResultSet : NSObject {
    NSMutableDictionary *_results;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultsLock;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;
- (void)setError:(id)a0 forPhoneNumber:(id)a1;
- (void)setResult:(id)a0 resultDataSource:(long long)a1 forPhoneNumber:(id)a2;

@end
