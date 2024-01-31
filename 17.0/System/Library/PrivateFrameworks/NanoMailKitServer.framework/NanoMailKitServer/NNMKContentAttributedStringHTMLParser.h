@class NSDataDetector, NSMutableDictionary, NSLock, NSMutableAttributedString;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableAttributedString *parsedAttributedString;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) double maxImageWidth;
@property (nonatomic) BOOL *partiallyParsed;
@property (retain, nonatomic) NSMutableDictionary *imageAtachmentsDataByContentId;
@property (retain, nonatomic) NSDataDetector *dataDetector;

+ (id)_scaleAndPrepareImageForClient:(id)a0 maxWidth:(double)a1 screenScale:(double)a2;
+ (struct CGSize { double x0; double x1; })_scaledDownSize:(struct CGSize { double x0; double x1; })a0 maxWidth:(double)a1;
+ (id)adjustedImage:(id)a0 maxWidth:(double)a1 screenScale:(double)a2;
+ (id)attachmentAttributedStringWithContentId:(id)a0 mergingAttributes:(id)a1;
+ (id)imageAttachmentAttributedStringWithContentId:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 mergingAttributes:(id)a2;
+ (id)trimAttributedString:(id)a0;

- (void).cxx_destruct;
- (void)_addDataDetectionAttributes:(id)a0;
- (void)_appendComponentWithKey:(id)a0 from:(id)a1 to:(id)a2;
- (id)_parseHTMLBody:(id)a0 encoding:(unsigned long long)a1 maxLength:(unsigned long long)a2 maxImageWidth:(double)a3 partiallyParsed:(BOOL *)a4 imageAttachmentsLoaded:(id *)a5 urlsForValidation:(id)a6 urlsFound:(id *)a7;
- (id)_parsePlainTextBody:(id)a0 encoding:(unsigned long long)a1;
- (BOOL)_validateURLsAndHTMLTagsInParsedString:(id)a0 urlsFound:(id *)a1;
- (void)appendImageWithSource:(id)a0 width:(double)a1 height:(double)a2 stringAttributes:(id)a3;
- (void)appendString:(id)a0 stringAttributes:(id)a1;
- (BOOL)isElementBlocked:(id)a0 attributeQueryBlock:(id /* block */)a1;
- (BOOL)isElementIgnorable:(id)a0;
- (BOOL)isErrorTypeBlocked:(char *)a0;
- (BOOL)isWebLink:(id)a0;
- (id)parseHTMLBody:(id)a0 encoding:(unsigned long long)a1 maxLength:(unsigned long long)a2 maxImageWidth:(double)a3 partiallyParsed:(BOOL *)a4 imageAttachmentsLoaded:(id *)a5 urlsForValidation:(id)a6;
- (id)parseHTMLBody:(id)a0 encoding:(unsigned long long)a1 maxLength:(unsigned long long)a2 maxImageWidth:(double)a3 partiallyParsed:(BOOL *)a4 imageAttachmentsLoaded:(id *)a5 urlsFound:(id *)a6;
- (id)parseHTMLBody:(id)a0 encoding:(unsigned long long)a1 maxLength:(unsigned long long)a2 maxImageWidth:(double)a3 partiallyParsed:(BOOL *)a4 urlsForValidation:(id)a5;
- (id)parseHTMLBody:(id)a0 encoding:(unsigned long long)a1 maxLength:(unsigned long long)a2 maxImageWidth:(double)a3 partiallyParsed:(BOOL *)a4 urlsFound:(id *)a5;
- (id)parseTextBody:(id)a0;

@end
