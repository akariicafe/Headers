@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (id)markedConstraint;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
