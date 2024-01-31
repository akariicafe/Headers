@interface _UIViewHostingSceneSpecification : UIWindowSceneSpecification

- (BOOL)isInternal;
- (BOOL)isUIKitManaged;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
