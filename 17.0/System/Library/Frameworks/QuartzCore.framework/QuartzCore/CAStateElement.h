@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAStateElement *source;
@property (readonly, copy, nonatomic) NSString *keyPath;

+ (void)CAMLParserStartElement:(id)a0;

- (void)dealloc;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)apply:(id)a0;
- (id)save;
- (void).cxx_destruct;
- (void)foreachLayer:(id /* block */)a0;
- (id)targetName;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
