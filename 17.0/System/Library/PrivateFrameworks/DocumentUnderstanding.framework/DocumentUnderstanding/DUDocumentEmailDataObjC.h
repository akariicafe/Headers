@class NSString, NSArray, _TtC21DocumentUnderstanding19DUDocumentEmailData, NSDate;

@interface DUDocumentEmailDataObjC : NSObject {
    _TtC21DocumentUnderstanding19DUDocumentEmailData *_underlyingElement;
}

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *senderEmail;
@property (copy, nonatomic) NSString *senderDomain;
@property (copy, nonatomic) NSArray *recipientNames;
@property (copy, nonatomic) NSArray *recipientEmails;
@property (copy, nonatomic) NSArray *ccNames;
@property (copy, nonatomic) NSArray *ccEmails;
@property (copy, nonatomic) NSArray *bccNames;
@property (copy, nonatomic) NSArray *bccEmails;
@property (copy, nonatomic) NSDate *dateReceived;

- (id)init;
- (void).cxx_destruct;

@end
