@interface SGOffsetDictionary : NSObject {
    unsigned short _count;
    struct { unsigned long long x0; unsigned short x1; char x2[3]; } *_carrierEntries;
    struct { unsigned long long x0; unsigned short x1; char x2[3]; } *_mruCarrierEntry;
    unsigned long long _payloadOffset;
    unsigned long long _totalPayloadSize;
    unsigned long long _sizeFactor;
}

- (void)dealloc;
- (struct { unsigned long long x0; unsigned short x1; char x2[3]; } *)carrierEntryForKey:(const char *)a0;
- (id)fullMappingFromFile:(id)a0;
- (id)initWithFilehandle:(id)a0 sizeFactor:(unsigned long long)a1 keyLength:(int)a2 singleByteOffset:(BOOL)a3;
- (int)payloadCountForKey:(const char *)a0;
- (unsigned long long)payloadLengthForKey:(const char *)a0;
- (unsigned long long)seekLocationForKey:(const char *)a0;
- (id)stringValueForKey:(const char *)a0 fromFile:(id)a1;

@end
