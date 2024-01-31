@class STSSession;

@interface STSTransactionHandler : STSHandler

@property (readonly, weak, nonatomic) STSSession *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (id)stopTransaction;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;

@end
