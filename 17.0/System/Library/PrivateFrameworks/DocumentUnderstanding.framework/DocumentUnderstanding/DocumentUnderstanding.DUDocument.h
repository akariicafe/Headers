@class NSString, NSArray, NSURL, NSDate, _TtC21DocumentUnderstanding21DUDocumentMessageData, _TtC21DocumentUnderstanding18DUDocumentHTMLData;

@interface DocumentUnderstanding.DUDocument : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ rawDocument;
}

@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *subHeadline;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *creator;
@property (nonatomic, readonly) NSString *abstract;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *inLanguage;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURL *thumbnailUrl;
@property (nonatomic, readonly) NSURL *significantLink;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *dateModified;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding21DUDocumentMessageData *documentMessageData;
@property (nonatomic, readonly) NSArray *documentUIElements;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding18DUDocumentHTMLData *documentHTMLData;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)rawCopy;
- (id)initWithRawDocument:(id)a0 maxLength:(long long)a1;
- (id)initWithText:(id)a0 maxLength:(long long)a1;

@end
