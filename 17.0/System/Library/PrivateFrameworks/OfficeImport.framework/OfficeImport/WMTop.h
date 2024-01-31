@interface WMTop : QLTop

- (Class)stateClass;
- (void)initializeClasses;
- (Class)mapperClassForIndexing:(BOOL)a0;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;

@end
