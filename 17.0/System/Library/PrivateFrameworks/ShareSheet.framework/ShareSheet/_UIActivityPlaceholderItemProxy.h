@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {
    id _uikit_placeholderItem;
}

@property (readonly, nonatomic) id placeholderItem;

+ (id)unproxiedItemForItem:(id)a0;
+ (id)unproxiedItemsForItems:(id)a0;

- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (id)initWithPlaceholderItem:(id)a0;
- (id)placeholderItem;

@end
