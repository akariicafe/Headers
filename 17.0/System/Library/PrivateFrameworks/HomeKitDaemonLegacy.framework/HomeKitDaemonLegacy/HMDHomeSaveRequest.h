@class HMDHome, NSString, NSDictionary;

@interface HMDHomeSaveRequest : HMFObject

@property (readonly, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSDictionary *information;
@property (readonly, nonatomic) unsigned long long saveOptions;
@property (readonly, nonatomic) BOOL objectChange;
@property (readonly, nonatomic) BOOL incrementGeneration;

- (void).cxx_destruct;
- (id)_initWithHome:(id)a0 reason:(id)a1 information:(id)a2 postSyncNotification:(BOOL)a3 objectChange:(BOOL)a4 saveOptions:(unsigned long long)a5;
- (void)_updateSaveOptions:(BOOL)a0 reason:(id)a1;
- (id)initWithHome:(id)a0 reason:(id)a1 information:(id)a2 postSyncNotification:(BOOL)a3 objectChange:(BOOL)a4;
- (id)initWithReason:(id)a0 information:(id)a1 postSyncNotification:(BOOL)a2;
- (id)initWithReason:(id)a0 information:(id)a1 saveOptions:(unsigned long long)a2;

@end
