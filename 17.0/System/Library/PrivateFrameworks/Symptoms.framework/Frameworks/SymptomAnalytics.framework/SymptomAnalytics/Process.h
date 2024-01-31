@class NSString, NSSet, NSDate, LiveUsage;

@interface Process : NSManagedObject

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *extensionName;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSSet *hasLiveUsage;
@property (retain, nonatomic) LiveUsage *hintLiveUsage;
@property (readonly, nonatomic) BOOL isApp;

+ (id)entityName;
+ (id)fetchRequest;

@end
