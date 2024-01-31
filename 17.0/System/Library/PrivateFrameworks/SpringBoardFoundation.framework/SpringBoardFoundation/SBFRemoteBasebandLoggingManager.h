@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)_notifyObservers;
- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)isLogCollectionEnabled;

@end
