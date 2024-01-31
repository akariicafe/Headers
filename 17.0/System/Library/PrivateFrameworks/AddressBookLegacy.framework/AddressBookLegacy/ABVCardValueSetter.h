@interface ABVCardValueSetter : NSObject

- (BOOL)setImageData:(id)a0;
- (id)imageData;
- (BOOL)setValue:(void *)a0 forProperty:(unsigned int)a1;
- (id)fullName;
- (void *)valueForProperty:(unsigned int)a0;
- (BOOL)propertyIsValidForPerson:(unsigned int)a0;
- (BOOL)setImageData:(id)a0 cropRectX:(int)a1 cropRectY:(int)a2 cropRectWidth:(int)a3 cropRectHeight:(int)a4;
- (void)setValueInTemporaryCache:(id)a0 forProperty:(unsigned int)a1;

@end
