@class NSNumber, NSDate;

@interface SSVoiceMemosResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *durationInSeconds;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;

@end
