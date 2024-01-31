@interface MFLocalizedMessageHeaders : MFMessageHeaders

+ (id)englishHeadersFromLocalizedHeaders:(id)a0;
+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)a0;

- (id)markupString;
- (void)appendHeaderMarkupForKey:(id)a0 value:(id)a1 toString:(id)a2;
- (id)copyFormattedHeaderValueFromAddressList:(id)a0;

@end
