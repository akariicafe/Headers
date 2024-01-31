@interface AVHapticSequenceEntry : NSObject

@property (copy) id /* block */ handler;
@property BOOL running;
@property BOOL detached;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
