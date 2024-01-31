@class NSString, NSMutableArray;

@interface HMDStructuredDataFoundationWriter : HMDStructuredWriter {
    id _container;
    NSString *_currentKey;
    NSMutableArray *_stack;
    BOOL _mutableContainers;
}

- (void)endArray;
- (id)init;
- (void)endDictionary;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)failWithError:(id)a0;
- (void)writeString:(id)a0;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (void)emitRootValue:(id)a0;
- (id)initWithMutableContainers:(BOOL)a0;
- (void)writeBoolean:(BOOL)a0;
- (void)writeDate:(id)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeLogicalValue:(id)a0 validateAndCopy:(BOOL)a1;
- (void)writeNull;
- (void)writeNumber:(id)a0;
- (void)writeUUID:(id)a0;

@end
