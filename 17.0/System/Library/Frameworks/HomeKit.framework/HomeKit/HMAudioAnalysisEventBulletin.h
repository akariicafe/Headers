@class NSUUID, NSString, NSArray, NSDate;

@interface HMAudioAnalysisEventBulletin : NSObject <HMFLogging, HMFObject>

@property (readonly) unsigned long long state;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly, copy) NSUUID *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)initWithProto:(id)a0;
+ (id)shortDescription;
+ (id)logCategory;

@end
