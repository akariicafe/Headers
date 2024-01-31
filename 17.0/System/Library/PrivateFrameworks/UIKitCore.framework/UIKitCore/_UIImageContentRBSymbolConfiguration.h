@class CUINamedVectorGlyph;

@interface _UIImageContentRBSymbolConfiguration : NSObject {
    unsigned int _renderingMode;
    CUINamedVectorGlyph *_vectorGlyph;
    id /* block */ _styleResolverForMultiplyColor;
    double _variableValue;
}

- (id)init;
- (void).cxx_destruct;

@end
