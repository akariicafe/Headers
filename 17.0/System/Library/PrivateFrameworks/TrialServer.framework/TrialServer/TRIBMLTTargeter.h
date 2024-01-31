@class TRIBackgroundMLTaskDatabase;
@protocol TRIUserCovariateProviding, TRISystemCovariateProviding;

@interface TRIBMLTTargeter : NSObject {
    TRIBackgroundMLTaskDatabase *_db;
}

@property (readonly, nonatomic) id<TRISystemCovariateProviding> systemCovariateProvider;
@property (readonly, nonatomic) id<TRIUserCovariateProviding> userCovariateProvider;

+ (id)_targetingErrorWithDeployment:(id)a0 errorType:(id)a1 details:(id)a2;
+ (id)targetingErrorWithDeployment:(id)a0 errorType:(id)a1;

- (id)init;
- (id)initWithDatabase:(id)a0 systemCovariateProvider:(id)a1 userCovariateProvider:(id)a2;
- (void).cxx_destruct;
- (struct { unsigned char x0; })_evaluateExpressionForDeployment:(id)a0 context:(id)a1 assignment:(id)a2 fpsId:(id *)a3 error:(id *)a4;
- (struct { unsigned char x0; })targetBMLT:(id)a0 factorPackSetId:(id *)a1 error:(id *)a2;

@end
