@class NSString, NSArray, NSNumber;

@interface MSSendMailIntent : INIntent <EFPubliclyDescribable>

@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSNumber *isDraft;
@property (copy, nonatomic) NSString *userTypedContent;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_privacySafeDescription;

@end
