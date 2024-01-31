@class NSDictionary;

@interface BYSeedProgramManager : NSObject

@property (readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;

- (long long)currentSeedProgram;
- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 programID:(id)a2 completion:(id /* block */)a3;

@end
