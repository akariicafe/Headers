@class HMBModelContainer;

@interface HMBMutableLocalDatabaseConfiguration : HMBLocalDatabaseConfiguration

@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) HMBModelContainer *modelContainer;

@end
