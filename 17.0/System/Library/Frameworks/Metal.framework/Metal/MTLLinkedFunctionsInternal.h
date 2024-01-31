@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)groups;
- (void)setGroups:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)binaryFunctions;
- (void)setFunctions:(id)a0;
- (void)setPrivateFunctions:(id)a0;
- (void)setBinaryFunctions:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)functions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)privateFunctions;
- (BOOL)isEmpty;

@end
