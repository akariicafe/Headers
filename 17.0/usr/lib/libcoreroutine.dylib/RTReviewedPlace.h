@class NSDate;

@interface RTReviewedPlace : NSObject

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSDate *lastSuggestedReviewDate;
@property (readonly, nonatomic) BOOL hasUserReviewed;
@property (readonly, nonatomic) NSDate *modifiedDate;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMuid:(unsigned long long)a0 lastSuggestedReviewDate:(id)a1 hasUserReviewed:(BOOL)a2 modifiedDate:(id)a3;

@end
