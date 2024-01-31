@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (BOOL)isSyncStatusChangeNotification:(id)a0;
+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;
+ (id)changedIdentifiersForNotification:(id)a0;

- (void)registerDelegate:(id)a0;
- (id)init;
- (id)_orderedDelegates;
- (void)objectsChangedNotification:(id)a0;
- (void).cxx_destruct;

@end
