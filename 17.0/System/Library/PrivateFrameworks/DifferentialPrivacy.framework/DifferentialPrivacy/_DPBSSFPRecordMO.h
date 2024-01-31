@class NSString;

@interface _DPBSSFPRecordMO : NSManagedObject

@property (retain, nonatomic) NSString *privateValue;
@property (retain, nonatomic) NSString *tableVersion;
@property (nonatomic) long long segmentIndex;
@property (nonatomic) BOOL verificationMode;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

+ (id)fetchRequest;

@end
