@class NSString, NSNumber;

@interface ICASPdfAttachmentData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *attachmentID;
@property (readonly, nonatomic) NSNumber *hasActivity;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAttachmentID:(id)a0 hasActivity:(id)a1;

@end
