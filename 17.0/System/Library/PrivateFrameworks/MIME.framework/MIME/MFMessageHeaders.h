@class NSData, NSArray, NSString;

@interface MFMessageHeaders : NSObject <ECMessageHeaders, NSCopying> {
    unsigned int _preferredEncoding;
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int preferredEncoding;
@property (readonly, nonatomic) NSArray *listUnsubscribeCommands;
@property (readonly, nonatomic) NSString *listUnsubscribePostContent;
@property (readonly, nonatomic) NSData *encodedHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueHeaderKeyStringForString:(id)a0;
+ (id)addressListFromEncodedString:(id)a0;
+ (id)basicHeaders;
+ (BOOL)isStructuredHeaderKey:(id)a0;
+ (BOOL)shouldDecodeHeaderForKey:(id)a0;
+ (id)copyAddressListFromEncodedData:(id)a0 encoding:(unsigned int)a1;
+ (id)encodedDataForAddressList:(id)a0 splittingAtLength:(unsigned long long)a1 firstLineBuffer:(unsigned long long)a2;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)headersRequiringSMTPUTF8Support;
- (void)appendHeaderData:(id)a0 andRecipients:(id)a1;
- (id)_capitalizedKeyForKey:(id)a0;
- (id)allHeaderKeys;
- (id)copyAddressListForBcc;
- (id)copyAddressListForCc;
- (id)copyAddressListForReplyTo;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForSender;
- (id)copyAddressListForTo;
- (id)copyFirstStringValueForKey:(id)a0;
- (id)copyHeadersForKey:(id)a0;
- (id)firstHeaderForKey:(id)a0;
- (id)firstSenderAddress;
- (BOOL)hasHeaderForKey:(id)a0;
- (id)headerData;
- (id)headersDictionary;
- (id)headersForKey:(id)a0;
- (id)initWithHeaderData:(id)a0 encoding:(unsigned int)a1;
- (id)references;
- (id)_copyHeaderValueForKey:(id)a0 offset:(unsigned long long *)a1 decoded:(BOOL)a2;
- (id)_commaSeparatedValuesForKey:(id)a0 includeAngleBracket:(BOOL)a1;
- (unsigned int)_contentTypeEncoding;
- (id)_copyAddressListForKey:(id)a0;
- (id)_copyHeaderValueForKey:(id)a0;
- (id)_decodeHeaderKeysFromData:(id)a0;
- (id)_headerValueForKey:(id)a0 offset:(unsigned long long *)a1;
- (void)_setCapitalizedKey:(id)a0 forKey:(id)a1;
- (id)copyDecodedStringFromHeaderData:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyFirstHeaderForKey:(id)a0;
- (id)copyFirstNonDecodedHeaderForKey:(id)a0;
- (void)enumerateKeysAndBytesUsingBlock:(id /* block */)a0;
- (id)firstAddressForKey:(id)a0;
- (id)initWithASCIIHeaderString:(id)a0;

@end
