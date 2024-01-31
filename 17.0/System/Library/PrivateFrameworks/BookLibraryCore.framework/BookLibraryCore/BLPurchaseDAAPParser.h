@interface BLPurchaseDAAPParser : NSObject

+ (id)sharedInstance;
+ (id)decodeData:(id)a0;
+ (id)decodeHexString:(id)a0;
+ (id)typeForDRCPValueType:(long long)a0;

- (unsigned long long)SwapInt64BigToHost:(const char *)a0 size:(long long)a1;
- (id)parseGetSpeakersResponse:(const char *)a0 count:(long long)a1;
- (id)parseBookletItem:(const char *)a0 count:(long long)a1;
- (id)parseBookletListing:(const char *)a0 count:(long long)a1;
- (id)parseBrowseResults:(const char *)a0 count:(long long)a1;
- (id)parseContentCodes:(const char *)a0 count:(long long)a1;
- (id)parseControlPromptCollection:(const char *)a0 count:(long long)a1;
- (id)parseControlPromptResponse:(const char *)a0 count:(long long)a1;
- (id)parseDACPPropertyResponse:(const char *)a0 count:(long long)a1;
- (id)parseDeletedIDsList:(const char *)a0 count:(long long)a1;
- (void)parseDict:(const char *)a0 size:(long long)a1 intoDict:(id)a2;
- (id)parseError:(const char *)a0 count:(long long)a1;
- (id)parseListingCollection:(const char *)a0 count:(long long)a1 capacity:(int)a2;
- (id)parseListingHeader:(const char *)a0 count:(long long)a1;
- (id)parseListingItem:(const char *)a0 count:(long long)a1;
- (id)parseLogin:(const char *)a0 count:(long long)a1;
- (id)parseMACAddressListing:(const char *)a0 count:(long long)a1;
- (id)parseServerInfo:(const char *)a0 count:(long long)a1;
- (id)parseUTF8String:(const char *)a0 length:(long long)a1;
- (id)parseUnicodeCharacter:(const char *)a0 count:(long long)a1;
- (id)processFlavor:(const char *)a0 size:(long long)a1;
- (id)processFlavors:(const char *)a0 size:(long long)a1;
- (id)processResponseCode:(unsigned int)a0 bytes:(const char *)a1 count:(long long)a2;
- (id)processXMLContent:(const char *)a0 count:(long long)a1;
- (void)setBool:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setDate:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setFloat32:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setSInt16:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setSInt8:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setString:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt16:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt32:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt64:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt8:(const char *)a0 size:(long long)a1 inDict:(id)a2 forKey:(id)a3;
- (void)unknownCode:(unsigned int)a0 bytes:(const char *)a1 size:(long long)a2;

@end
