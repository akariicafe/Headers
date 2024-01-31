@class NSString, AMSBagFrozenDataSource, NSDate, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSBagFrozenDataSource *dataSource;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithDataSource:(id)a0;
- (id)init;
- (id)arrayForKey:(id)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)boolForKey:(id)a0;
- (id)compile;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isLoaded;
- (id)initWithData:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0;
- (id)_initWithSnapshotBag:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithCoder:(id)a0;

@end
