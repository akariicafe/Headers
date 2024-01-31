@protocol BKMatchTouchIDOperationDelegate;

@interface BKMatchTouchIDOperation : BKMatchOperation

@property (weak, nonatomic) id<BKMatchTouchIDOperationDelegate> delegate;
@property (nonatomic) BOOL requireFingerOff;

- (id)optionsDictionaryWithError:(id *)a0;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;

@end
