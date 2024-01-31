@interface DocumentUnderstanding.DUEncodingModelOutput : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ modelName;
    void /* unknown type, empty encoding */ nHiddenLayers;
    void /* unknown type, empty encoding */ hiddenLayerSize;
    void /* unknown type, empty encoding */ sequenceSize;
    void /* unknown type, empty encoding */ pooledHiddenLayerValues;
    void /* unknown type, empty encoding */ hiddenLayerValues;
}

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
