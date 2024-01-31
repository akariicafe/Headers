@class CRKASMCourseCreateProperties;
@protocol CRKClassKitRosterRequirements;

@interface CRKCreateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) CRKASMCourseCreateProperties *properties;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)fetchInstructor;
- (BOOL)applyProperties:(id)a0 toClass:(id)a1 error:(id *)a2;
- (void)constructClassWithInstructor:(id)a0;
- (id)initWithProperties:(id)a0 requirements:(id)a1;
- (BOOL)location:(id)a0 hasMatchInLocations:(id)a1;
- (void)validateDesiredLocationExistsForInstructor:(id)a0;
- (void)validateParameters;

@end
