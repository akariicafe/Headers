@class NSString;
@protocol TPLayerDelegateProxyDelegate;

@interface TPLayerDelegateProxy : NSObject <CALayerDelegate> {
    id<TPLayerDelegateProxyDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)displayLayer:(id)a0;
- (void)clearDelegate;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
