@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (id)markedConstraint;
- (BOOL)shouldBeMinimized;
- (int)valueRestriction;

@end
