@class NSArray, NSData;

@interface MADVIVisualSearchResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSData *userFeedbackPayload;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResultItems:(id)a0 andUserFeedbackPayload:(id)a1;

@end
