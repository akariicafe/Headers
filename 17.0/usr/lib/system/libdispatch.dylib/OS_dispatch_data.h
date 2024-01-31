@class NSString;

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_isCompact;
- (id)init;
- (void)_activate;
- (void)dealloc;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 freeWhenDone:(BOOL)a3 bytesAreVM:(BOOL)a4;
- (void)_suspend;
- (void)_resume;
- (void)_setTargetQueue:(id)a0;
- (void *)_getContext;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)_setContext:(void *)a0;
- (BOOL)_bytesAreVM;

@end
