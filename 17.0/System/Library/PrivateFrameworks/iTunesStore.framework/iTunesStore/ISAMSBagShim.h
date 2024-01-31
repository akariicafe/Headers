@class SSBag, NSString, ISURLBag, NSDate, AMSProcessInfo;

@interface ISAMSBagShim : NSObject <AMSBagProtocol>

@property (retain, nonatomic) SSBag *bag;
@property (retain, nonatomic) ISURLBag *URLBag;
@property (nonatomic) long long type;
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
- (id)initWithBag:(id)a0;
- (id)boolForKey:(id)a0;
- (BOOL)isLoaded;
- (id)_bagValueForKey:(id)a0 valueType:(unsigned long long)a1;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithURLBag:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;

@end
