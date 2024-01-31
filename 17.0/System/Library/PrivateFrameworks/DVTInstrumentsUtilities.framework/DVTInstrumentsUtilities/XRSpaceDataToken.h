@interface XRSpaceDataToken : NSObject <NSCopying> {
    id _tag;
    unsigned long long _seq;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpaceTag:(id)a0 sequenceID:(unsigned long long)a1;

@end
