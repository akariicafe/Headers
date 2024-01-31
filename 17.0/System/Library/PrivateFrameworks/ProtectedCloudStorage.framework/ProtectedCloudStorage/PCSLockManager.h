@class NSObject, NSHashTable;
@protocol OS_os_log;

@interface PCSLockManager : NSObject

@property (retain) NSHashTable *observers;
@property (retain) NSHashTable *holders;
@property (retain) NSObject<OS_os_log> *log;

+ (id)manager;
+ (void)dropAssertion;
+ (BOOL)holdAssertion;

- (void)removeAssertion:(id)a0;
- (void).cxx_destruct;
- (id)initManager;
- (void)_onlockDropAssertion:(id)a0;
- (void)dropAssertion:(id)a0;
- (BOOL)holdAssertion:(id)a0;
- (id)lockAssertion:(id)a0;

@end
