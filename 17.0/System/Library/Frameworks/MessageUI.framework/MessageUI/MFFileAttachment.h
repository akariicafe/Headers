@class NSString, NSURL;

@interface MFFileAttachment : NSObject

@property (copy, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSURL *attachmentContentIDURL;
@property (nonatomic) int attachmentType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
