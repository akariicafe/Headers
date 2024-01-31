@class TSCH3DShaderProgram, TSCH3DVersion;

@interface TSCH3DShaderResource : TSCH3DResource {
    TSCH3DShaderProgram *_program;
}

@property (readonly, nonatomic) TSCH3DShaderProgram *program;
@property (readonly, nonatomic) TSCH3DVersion *version;

+ (struct pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *>> { struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x0; char *x1; } x0; } x0; struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x0; char *x1; } x0; } x1; })stringsFromBuffer:(id)a0;

- (void).cxx_destruct;
- (id)initWithCaching:(int)a0;
- (id)get;
- (void)appendShaderResourceString:(struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x0; char *x1; } x0; })a0 toDataBuffer:(id)a1;
- (id)initWithCaching:(int)a0 version:(id)a1;
- (struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x0; char *x1; } x0; })resourceStringOfString:(id)a0;

@end
