@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface MTFrozenBag : NSObject <AMSBagProtocol>

@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;
@property (copy, nonatomic) NSDictionary *config;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)arrayForKey:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)boolForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 config:(id)a2;

@end
