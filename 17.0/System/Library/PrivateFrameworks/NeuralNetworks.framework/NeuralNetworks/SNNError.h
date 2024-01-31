@interface SNNError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)invalidInputErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidStateErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidEspressoConfigurationErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidEspressoContextErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidEspressoNetworkErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidEspressoPlanErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidMILProgramErrorForMethod:(id)a0 description:(id)a1;

@end
