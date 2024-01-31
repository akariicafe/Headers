@class EAGLContext;

@interface TDreamManagerContextMapKey : NSObject <NSCopying> {
    EAGLContext *_ctx;
}

+ (id)currentContextMapKey;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCTX:(id)a0;

@end
