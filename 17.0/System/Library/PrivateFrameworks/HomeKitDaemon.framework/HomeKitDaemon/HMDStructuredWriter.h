@class NSError;

@interface HMDStructuredWriter : HMDStructuredDataStream {
    NSError *_error;
}

+ (id)extendedTypeWriterWithWriter:(id)a0 options:(unsigned long long)a1;
+ (id)writerIntoOPACKData:(id)a0;
+ (id)writerIntoObject:(id *)a0;
+ (id)writerIntoObject:(id *)a0 extendedTypeOptions:(unsigned long long)a1;

- (void)endArray;
- (void)endDictionary;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)failWithError:(id)a0;
- (void)writeString:(id)a0;
- (id)error;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (void)writeBoolean:(BOOL)a0;
- (void)writeDate:(id)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeLogicalValue:(id)a0;
- (void)writeLogicalValue:(id)a0 validateAndCopy:(BOOL)a1;
- (void)writeNull;
- (void)writeNumber:(id)a0;
- (void)writeToken:(struct _HMDStructuredDataToken { long long x0; id x1; })a0;
- (void)writeUUID:(id)a0;

@end
