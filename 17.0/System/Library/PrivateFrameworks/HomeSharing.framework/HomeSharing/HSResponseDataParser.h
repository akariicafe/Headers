@interface HSResponseDataParser : NSObject

+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseBrowseListingWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseControlPromptResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseDeletedIDListingWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseDictionaryCollectionWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseEditCommandResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseErrorResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseItemIDArrayWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseItemsResponseWithBytes:(const char *)a0 length:(unsigned long long)a1 usingHandler:(id /* block */)a2;
+ (id)_parseListingCollectionWithBytes:(const char *)a0 length:(unsigned long long)a1 usingHandler:(id /* block */)a2;
+ (id)_parseListingItemWithBytes:(const char *)a0 length:(unsigned int)a1 usingHandler:(id /* block */)a2;
+ (id)_parseLoginResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parsePlayStatusResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseResponseCode:(unsigned int)a0 bytes:(const char *)a1 length:(unsigned long long)a2 usingHandler:(id /* block */)a3;
+ (id)_parseUpdateResponseWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)_parseUpdateTypeWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (void)enumerateDeletedItemsInResponseData:(id)a0 usingHandler:(id /* block */)a1;
+ (void)enumerateItemsInResponseData:(id)a0 usingHandler:(id /* block */)a1;
+ (id)enumerateRawItemsInResponseData:(id)a0 usingHandler:(id /* block */)a1;
+ (id)parseErrorInResponseData:(id)a0;
+ (void)parseItemWithBytes:(const char *)a0 length:(unsigned long long)a1 usingHandler:(id /* block */)a2;
+ (unsigned long long)parseItemWithBytes:(const char *)a0 length:(unsigned long long)a1 valuesOut:(struct { unsigned int x0; char *x1; unsigned long long x2; int x3; } *)a2 valuesCapacity:(unsigned long long)a3;
+ (id)parseResponseData:(id)a0;

@end
