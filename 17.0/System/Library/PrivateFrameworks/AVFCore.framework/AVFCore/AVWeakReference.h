@interface AVWeakReference : NSObject

@property (readonly, weak) id referencedObject;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)initWithReferencedObject:(id)a0;

@end
