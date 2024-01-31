@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation

@property (retain, nonatomic) NSArray *values;
@property (nonatomic) long long maskValue;
@property (nonatomic) long long setValue;

- (void).cxx_destruct;
- (id)initWithRowIDs:(id)a0 failedPushedTo:(unsigned long long)a1;
- (id)initWithRowIDs:(id)a0 mask:(long long)a1 set:(long long)a2;
- (id)initWithRowIDs:(id)a0 successfullyPushedTo:(unsigned long long)a1;
- (id)mainReturningError;

@end
