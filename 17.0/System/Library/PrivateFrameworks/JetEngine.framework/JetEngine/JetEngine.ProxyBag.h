@class NSString, NSDate;

@interface JetEngine.ProxyBag : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ bag;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (id)init;
- (id)arrayForKey:(id)a0;
- (BOOL)isExpired;
- (id)boolForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;

@end
