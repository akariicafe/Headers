@class NSString, SBSystemAction, NSHashTable;

@interface SBSystemActionAbstractDataSource : NSObject <SBSystemActionDataSource> {
    NSHashTable *_observers;
}

@property (retain, nonatomic) SBSystemAction *selectedSystemAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)executorForSystemAction:(id)a0;
- (void)updateSelectedAction;

@end
