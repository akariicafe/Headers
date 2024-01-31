@class NSArray;

@interface RCMutableComposition : RCComposition

@property (retain, nonatomic) NSArray *decomposedFragments;

- (void)recacheComposedDuration;

@end
