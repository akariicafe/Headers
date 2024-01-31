@class NSString, NSArray;

@interface ICASAttachmentData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *attachmentSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAttachmentSummary:(id)a0;

@end
