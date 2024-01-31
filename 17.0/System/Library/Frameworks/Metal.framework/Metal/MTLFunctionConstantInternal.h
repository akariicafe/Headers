@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    BOOL _required;
}

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)index;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 index:(unsigned long long)a2 required:(BOOL)a3;
- (id)description;
- (BOOL)required;
- (id)name;
- (unsigned long long)type;

@end
