@class NSNumber;

@interface CoreMLVersion : NSObject

@property (copy, nonatomic) NSNumber *frameworkVersionNumber;

+ (id)getInternalFrameworkVersion;

- (id)init;
- (void).cxx_destruct;

@end
