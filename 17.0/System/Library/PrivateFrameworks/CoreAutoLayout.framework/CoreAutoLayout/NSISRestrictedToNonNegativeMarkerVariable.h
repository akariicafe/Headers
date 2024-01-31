@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (id)markedConstraint;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
