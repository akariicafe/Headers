@class NSString, NSArray;

@interface NNMKComposedMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) unsigned long long sendingType;
@property (nonatomic) long long progress;
@property (retain, nonatomic) NSArray *to;
@property (retain, nonatomic) NSArray *cc;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *from;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (retain, nonatomic) NSString *standaloneReferenceMessageId;
@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) BOOL includeAttachments;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithNewId;

@end
