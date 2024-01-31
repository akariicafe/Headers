@class DUDocumentHTMLDataObjC, NSString, NSArray, NSURL, NSDate, _TtC21DocumentUnderstanding13DURawDocument;

@interface DUDocumentObjC : NSObject {
    _TtC21DocumentUnderstanding13DURawDocument *_underlyingDocument;
}

@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *subHeadline;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *inLanguage;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *thumbnailUrl;
@property (copy, nonatomic) NSURL *significantLink;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSArray *documentUIElements;
@property (copy, nonatomic) DUDocumentHTMLDataObjC *documentHTMLData;

- (id)init;
- (void).cxx_destruct;

@end
