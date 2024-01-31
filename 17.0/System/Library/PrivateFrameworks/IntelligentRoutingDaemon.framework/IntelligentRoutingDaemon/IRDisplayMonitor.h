@class FBSDisplayLayoutMonitor, NSString, NSHashTable;

@interface IRDisplayMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) BOOL displayLocked;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)didUpdateDisplayLayout:(id)a0;
- (id)getAppInFocus;

@end
