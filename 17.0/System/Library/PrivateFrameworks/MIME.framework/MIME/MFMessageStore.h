@class MFMessageStoreObjectCache, NSMutableSet;

@interface MFMessageStore : NSObject <NSCopying> {
    NSMutableSet *_uniqueStrings;
}

@property (readonly, retain, nonatomic) MFMessageStoreObjectCache *objectCache;

+ (id)log;
+ (Class)classForMimePart;
+ (Class)headersClass;
+ (void)setDefaultMessageHeadersClass:(Class)a0;

- (id)init;
- (void)setMessageClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)downloadMimePartNumber:(id)a0 message:(id)a1 withProgressBlock:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_cachedBodyDataContainerForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedBodyForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedHeaderDataForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedHeadersForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_downloadHeadersForMessages:(id)a0;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 partial:(BOOL *)a3;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)a0 forMessage:(id)a1 updateFlags:(BOOL)a2;
- (id)bestAlternativeForPart:(id)a0;
- (id)bodyDataForMessage:(id)a0 isComplete:(BOOL *)a1 isPartial:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)bodyForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 updateFlags:(BOOL)a2;
- (id)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (BOOL)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 withConsumer:(id)a3 downloadIfNecessary:(BOOL)a4 didDownload:(BOOL *)a5;
- (BOOL)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withConsumer:(id)a2 downloadIfNecessary:(BOOL)a3;
- (id)decryptedTopLevelPartForPart:(id)a0;
- (id)defaultAlternativeForPart:(id)a0;
- (void)flushCacheForMessage:(id)a0;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (BOOL)hasCompleteDataForMimePart:(id)a0;
- (id)headerDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (id)headersForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1;
- (BOOL)messageCanBeTriaged:(id)a0;
- (id)newObjectCache;
- (void)setNumberOfAttachments:(unsigned int)a0 isSigned:(BOOL)a1 isEncrypted:(BOOL)a2 forMessage:(id)a3;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)a0;
- (void)_flushAllCaches;
- (id)_bodyForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 updateFlags:(BOOL)a2;
- (id)_cachedBodyDataForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)uniquedString:(id)a0;

@end
