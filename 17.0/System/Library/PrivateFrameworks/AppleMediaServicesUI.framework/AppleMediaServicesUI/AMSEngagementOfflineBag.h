@class AMSProcessInfo, NSString, NSDate, AMSSnapshotBag, AMSPromise;
@protocol AMSBagProtocol;

@interface AMSEngagementOfflineBag : NSObject <AMSBagProtocol>

@property (retain, nonatomic) AMSPromise *snapshotPromise;
@property (retain, nonatomic) id<AMSBagProtocol> underlyingBag;
@property (retain, nonatomic) AMSSnapshotBag *underlyingOfflineBag;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)arrayForKey:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)boolForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)_attemptBagLoad;
- (id)_getOfflineBagData;
- (id)_getSnapshotResult;
- (id)initWithUnderlyingBag:(id)a0;

@end
