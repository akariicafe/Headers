@class TSDStroke;

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    int _symbolType;
    double _size;
    TSDStroke *_stroke;
    BOOL _forHitCheck;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSymbolType:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(BOOL)a3;

@end
