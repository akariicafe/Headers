@interface ABVCardCardDAVRecord : ABVCardRecord

+ (BOOL)includeNotesInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (BOOL)includeAddressingGrammarInVCards;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeREVInVCards;

- (BOOL)useThumbnailImageFormatIfAvailable;

@end
