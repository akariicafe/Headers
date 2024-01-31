@class FBKFeedback, NSArray, NSString, FBKContentItem, NSDate, NSNumber, NSSet;

@interface FBKFormResponseStub : FBKManagedFeedbackObject

@property (copy, nonatomic) NSNumber *formID;
@property (retain, nonatomic) NSArray *questionGroupStubs;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSDate *submittedAt;
@property (copy, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) FBKContentItem *contentItem;
@property (retain, nonatomic) NSSet *filePromiseStubs;
@property (readonly) BOOL isSubmitted;
@property (readonly) NSNumber *followupCount;
@property (readonly, nonatomic) FBKFeedback *feedback;

+ (id)entityName;
+ (id)fetchRequest;

- (void)setPropertiesFromJSONObject:(id)a0;
- (id)visibleFilePromises;

@end
