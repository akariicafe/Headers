@interface PTGlobalVideoHeaderMetadataVersion1 : PTGlobalVideoHeaderMetadata

- (id)initWithData:(id)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;

@end
