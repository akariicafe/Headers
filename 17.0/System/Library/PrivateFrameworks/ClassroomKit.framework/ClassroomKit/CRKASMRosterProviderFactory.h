@interface CRKASMRosterProviderFactory : NSObject

- (id)makeInstructorRosterProvider;
- (id)makeInstructorRosterProviderWithoutKeychain;
- (id)makeInstructorRosterWithoutKeychainAndWithPersonaAdoption;
- (id)makeRosterProviderWithConfiguration:(id)a0;
- (id)makeStudentRosterProvider;

@end
