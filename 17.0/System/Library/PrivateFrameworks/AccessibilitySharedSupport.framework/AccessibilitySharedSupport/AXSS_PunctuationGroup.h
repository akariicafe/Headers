@class NSUUID, NSString, NSSet, NSDate;

@interface AXSS_PunctuationGroup : NSManagedObject

@property (copy, nonatomic) NSUUID *basePunctuationUUID;
@property (copy, nonatomic) NSString *ckChangeTag;
@property (copy, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic) BOOL inCloud;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) short version;
@property (retain, nonatomic) NSSet *autoSwitchContexts;

+ (id)fetchRequest;

@end
