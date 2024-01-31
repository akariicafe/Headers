@class NSString;

@interface PGCurationTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) NSString *niceDescription;

- (id)init;
- (id)debugDescription;
- (BOOL)isActive;
- (BOOL)isMatchingRequired;

@end
