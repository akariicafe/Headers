@class NSTimeZone, NSString, NSArray, NSURL, NSDate, NSNumber;

@interface RVDocumentContext : NSObject <NSSecureCoding> {
    NSArray *existingDDResultsList;
    NSArray *groupAllResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorEmailAddress;
@property (copy, nonatomic) NSString *authorContactUUID;
@property (copy, nonatomic) NSDate *contentReferenceDate;
@property (copy, nonatomic) NSTimeZone *contentReferenceTimeZone;
@property (copy, nonatomic) NSString *contentSubject;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSURL *documentURL;
@property (copy, nonatomic) NSArray *existingDDResultsList;
@property (copy, nonatomic) NSArray *groupAllResults;
@property (copy, nonatomic) NSNumber *groupCategory;
@property (copy, nonatomic) NSString *groupTranscript;
@property (copy, nonatomic) NSString *coreSpotlightUniqueIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setNameAndEmailWithRawSenderField:(id)a0;

@end
