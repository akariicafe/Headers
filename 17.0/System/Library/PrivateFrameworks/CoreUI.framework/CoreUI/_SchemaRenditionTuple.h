@class NSMutableDictionary;

@interface _SchemaRenditionTuple : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } key[22];
    NSMutableDictionary *info;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
