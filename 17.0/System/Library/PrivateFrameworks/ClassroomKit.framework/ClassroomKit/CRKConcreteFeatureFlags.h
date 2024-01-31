@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>

@property (readonly, nonatomic, getter=isDataSeparationEnabled) BOOL dataSeparationEnabled;
@property (readonly, nonatomic, getter=isASMUserCachingEnabled) BOOL ASMUserCachingEnabled;

@end
