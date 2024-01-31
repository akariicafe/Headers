@interface _NSPlaceholderObservation : NSObservation

- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (oneway void)release;

@end
