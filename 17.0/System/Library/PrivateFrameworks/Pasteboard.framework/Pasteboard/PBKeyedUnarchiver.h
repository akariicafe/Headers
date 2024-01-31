@class NSSet;

@interface PBKeyedUnarchiver : NSKeyedUnarchiver

@property (copy, nonatomic) NSSet *allowedClasses;

- (void).cxx_destruct;

@end
