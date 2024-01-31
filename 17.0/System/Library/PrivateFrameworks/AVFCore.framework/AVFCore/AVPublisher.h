@interface AVPublisher : NSObject

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)subscribeRequestingInitialValue:(BOOL)a0 block:(id /* block */)a1;

@end
