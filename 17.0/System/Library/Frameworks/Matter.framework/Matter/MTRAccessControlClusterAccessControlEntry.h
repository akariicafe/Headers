@class NSNumber, NSArray;

@interface MTRAccessControlClusterAccessControlEntry : MTRAccessControlClusterAccessControlEntryStruct

@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *authMode;
@property (copy, nonatomic) NSArray *subjects;
@property (copy, nonatomic) NSArray *targets;
@property (copy, nonatomic) NSNumber *fabricIndex;

@end
