@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (void)close;
- (id)init;
- (id)description;
- (BOOL)hasAttributes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttribute:(id)a0 value:(id)a1;
- (id)initWithXMLAttributes:(id)a0;
- (void)writeAttributes:(id)a0;

@end
