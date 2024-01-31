@class NSString;

@interface CPLTransaction : NSObject {
    BOOL _dirty;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (unsigned long long)transactionCount;
+ (id)newTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (id)transactions;
+ (void)beginTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (void)endTransactionWithIdentifier:(id)a0;

- (void)dealloc;
- (void)endTransaction;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;

@end
