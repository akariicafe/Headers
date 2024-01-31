@class NSString;
@protocol BDSOSTransactionDelegate;

@interface BDSOSTransactionProvider : NSObject <BDSOSTransactionProviding>

@property (weak, nonatomic) id<BDSOSTransactionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createTransactionWithName:(const char *)a0;

@end
