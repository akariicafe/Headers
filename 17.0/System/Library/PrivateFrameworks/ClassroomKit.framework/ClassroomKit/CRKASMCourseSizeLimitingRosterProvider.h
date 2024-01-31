@interface CRKASMCourseSizeLimitingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) long long maxUserCount;
@property (readonly, nonatomic) long long maxTrustedUserCount;

- (id)courseForIdentifier:(id)a0;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (id)initWithRosterProvider:(id)a0 maxUserCount:(long long)a1 maxTrustedUserCount:(long long)a2;
- (BOOL)isLegalToUpdateCourse:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
