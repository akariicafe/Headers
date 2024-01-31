@class TSPData;

@interface TSPDataObserverInfo : NSObject {
    id _observer;
    TSPData *_data;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) unsigned long long options;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)notifyWithStatus:(long long)a0 info:(id)a1;
- (BOOL)shouldClearObserverForStatus:(long long)a0;
- (BOOL)shouldNotifyStatus:(long long)a0;

@end
