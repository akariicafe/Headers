@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (id)copyXPCData;
- (void)dealloc;
- (unsigned long long)length;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (void *)bytes;
- (struct __CFData { } *)copyCFData;

@end
