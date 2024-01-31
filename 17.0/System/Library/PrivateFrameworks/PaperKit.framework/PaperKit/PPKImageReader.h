@interface PPKImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;

- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider { } *)a0;
- (id)_readDataFromTagAtPath:(id)a0 inMetadata:(struct CGImageMetadata { } *)a1;

@end
