@class NSArray, NSString;

@interface _GCKeyboardEventFusion : NSObject <_GCKeyboardEventSource>

@property (retain, nonatomic) NSArray *observations;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (id)observeKeyboardEvents:(id /* block */)a0;

@end
