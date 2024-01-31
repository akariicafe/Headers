@class NSArray, NSHashTable;

@interface WFSystemEventObserver : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) NSHashTable *observers;

- (void)removeObserver:(id)a0;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithProviders:(id)a0;

@end
