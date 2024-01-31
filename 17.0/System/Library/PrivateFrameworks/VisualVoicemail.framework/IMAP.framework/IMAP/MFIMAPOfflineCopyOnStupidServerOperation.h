@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {
    struct __CFArray { } *messageIds;
    struct __CFArray { } *internalDates;
}

- (void)dealloc;
- (unsigned int)approximateSize;
- (unsigned char)_magic;
- (id)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (void)expungeTemporaryUid:(unsigned int)a0;
- (BOOL)getMessageId:(id *)a0 andInternalDate:(id *)a1 forDestinationUid:(unsigned int)a2;
- (void)serializeIntoData:(id)a0;
- (void)setMessageId:(id)a0 andInternalDate:(id)a1 forMessageWithSourceUid:(unsigned int)a2;

@end
