@class NSNumber, NSDictionary;

@interface APCSAgeSensitiveThreshold : APConfiguration

@property (readonly, nonatomic) NSNumber *enabled;
@property (readonly, nonatomic) NSDictionary *sensitiveContentEligibilityThreshold;

+ (id)path;

@end
