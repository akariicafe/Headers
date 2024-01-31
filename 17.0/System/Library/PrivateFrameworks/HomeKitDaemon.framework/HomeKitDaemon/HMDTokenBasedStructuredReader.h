@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (void)endArray;
- (unsigned long long)beginArray;
- (id)readData;
- (void)endDictionary;
- (unsigned long long)beginDictionary;
- (void).cxx_destruct;
- (id)readString;
- (void)failWithError:(id)a0;
- (id)error;
- (id)readDate;
- (long long)tokenType;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (BOOL)readBoolean;
- (id)readDictionaryKey;
- (void)readNull;
- (id)readNumber;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (id)readUUID;
- (void)skipToken;

@end
