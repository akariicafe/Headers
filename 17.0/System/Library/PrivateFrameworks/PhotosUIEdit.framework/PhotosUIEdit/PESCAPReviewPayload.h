@class NSString;

@interface PESCAPReviewPayload : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) long long reason;
@property (retain, nonatomic) NSString *adjustmentsDescription;
@property (retain, nonatomic) NSString *filename;

+ (id)legacyPayloadWithReason:(long long)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithActionType:(long long)a0 reason:(long long)a1 score:(double)a2 adjustmentsDescription:(id)a3;

@end
