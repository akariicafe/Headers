@interface _UIWeakReference : NSObject <NSCopying>

@property (weak, nonatomic) id object;

+ (id)weakReferenceWrappingObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
