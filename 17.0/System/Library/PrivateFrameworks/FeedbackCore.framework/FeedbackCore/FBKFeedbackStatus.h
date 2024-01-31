@class FBKFeedback, NSArray, NSDictionary, FBKQuestionGroupStub, NSDate, NSNumber, NSAttributedString;

@interface FBKFeedbackStatus : FBKManagedFeedbackObject

@property (retain, nonatomic) NSArray *orderedKeys;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSDictionary *statusPairs;
@property (copy, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) FBKFeedback *feedback;
@property (readonly, nonatomic) FBKQuestionGroupStub *questionGroupStubRepresentation;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSAttributedString *attributedStringRepresentation;

+ (id)entityName;
+ (id)fetchRequest;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
