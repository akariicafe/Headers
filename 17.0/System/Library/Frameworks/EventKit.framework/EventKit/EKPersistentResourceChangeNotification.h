@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (void)setLastModifiedDate:(id)a0;
- (id)lastModifiedDate;
- (int)entityType;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;

@end
