@class NSError, NSMutableArray, PKAccountEnhancedMerchant;

@interface _PKPendingEnhancedMerchantNearbyLocationSearch : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    NSMutableArray *_completionHandlers;
}

@property (readonly, nonatomic) PKAccountEnhancedMerchant *merchant;
@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSError *error;

- (void)addCompletionHandler:(id /* block */)a0;
- (BOOL)isInProgress;
- (void).cxx_destruct;
- (void)cancel;
- (void)didFailWithError:(id)a0;
- (BOOL)isInTerminalState;
- (void)_callCompletionHandlers;
- (void)_updateState:(unsigned long long)a0 error:(id)a1;
- (void)didCompleteSuccessfully;
- (void)didStart;
- (id)initWithMerchant:(id)a0;

@end
