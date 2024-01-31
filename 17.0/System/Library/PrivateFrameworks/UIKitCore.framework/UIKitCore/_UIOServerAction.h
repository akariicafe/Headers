@class _UIOServerActionOriginContext;

@interface _UIOServerAction : BSAction {
    _UIOServerActionOriginContext *_originContext;
}

@property (readonly, nonatomic) _UIOServerActionOriginContext *originContext;

- (BOOL)isPermitted;
- (void).cxx_destruct;
- (id)initWithOriginContext:(id)a0 info:(id)a1 responder:(id)a2;
- (void)performActionFromConnection:(id)a0;

@end
