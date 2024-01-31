@interface LSPlugInQueryAll : LSPlugInQuery

- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;
- (BOOL)_remoteResolutionIsExpensive;

@end
