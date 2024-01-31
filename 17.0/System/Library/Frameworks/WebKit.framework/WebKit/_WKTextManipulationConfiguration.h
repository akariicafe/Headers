@class NSArray;

@interface _WKTextManipulationConfiguration : NSObject

@property (copy, nonatomic) NSArray *exclusionRules;
@property (nonatomic) BOOL includeSubframes;

- (void)dealloc;

@end
