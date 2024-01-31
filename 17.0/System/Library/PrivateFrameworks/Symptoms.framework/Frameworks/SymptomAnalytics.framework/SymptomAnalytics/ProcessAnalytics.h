@interface ProcessAnalytics : ObjectAnalytics

- (id)init;
- (id)initWithWorkspace:(id)a0 withCache:(BOOL)a1;
- (id)processesFromDate:(id)a0 untilDate:(id)a1;
- (id)processesWithName:(id)a0 nameKind:(id)a1;
- (id)processesWithNameInSet:(id)a0 nameKind:(id)a1;

@end
