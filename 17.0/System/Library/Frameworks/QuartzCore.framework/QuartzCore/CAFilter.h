@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) BOOL enabled;
@property BOOL cachesInputImage;
@property (getter=isAccessibility) BOOL accessibility;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)filterWithType:(id)a0;
+ (id)filterWithName:(id)a0;
+ (id)filterTypes;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void)setDefaults;
- (id)initWithType:(id)a0;
- (id)valueForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
