@interface VCWeakObjectHolder : NSObject {
    id _weakObject;
    struct OpaqueFigCFWeakReference { } *_weakObjectWithoutAutoRelease;
}

@property (readonly, nonatomic) id strong;
@property (readonly, nonatomic) struct OpaqueFigCFWeakReference **weak;

+ (id)weakObjectHolderWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (id)init;
- (void)dealloc;

@end
