@interface NSStackObservedValue : NSObservedValue

- (id)retain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)setFinished:(BOOL)a0;
- (void)setError:(id)a0;
- (oneway void)release;
- (void)setValue:(id)a0;

@end
