@class NSString, NSNumber;

@interface ICASAttachmentUTIItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) NSNumber *countOfAttachments;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUti:(id)a0 countOfAttachments:(id)a1;

@end
