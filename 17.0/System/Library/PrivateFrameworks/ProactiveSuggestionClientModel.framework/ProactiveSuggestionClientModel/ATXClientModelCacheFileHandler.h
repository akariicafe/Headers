@class NSString;

@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol> {
    NSString *_cacheFileBasePath;
    NSString *_clientModelId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientModelIdFromFileName:(id)a0;
+ (id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)a0;
+ (id)unarchiveCacheFileFromReadOnlyFileHandle:(id)a0;

- (id)cacheFilePath;
- (id)readOnlyFileHandleForSuggestionsCache;
- (id)initWithCacheFileBasePath:(id)a0 clientModelId:(id)a1;
- (id)readSuggestionsFromCache;
- (BOOL)deleteCachedSuggestionsFile;
- (void).cxx_destruct;
- (id)serializeSuggestionsData:(id)a0;
- (BOOL)writeSerializedDataToCacheFile:(id)a0;
- (BOOL)createCacheFileForClientModelCacheUpdate:(id)a0;

@end
