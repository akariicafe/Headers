@interface LASecAccessControl : NSObject

+ (struct __SecAccessControl { } *)deserializeACL:(id)a0;
+ (struct __SecAccessControl { } *)allowAllACL;
+ (id)constraintsFromACL:(struct __SecAccessControl { } *)a0;
+ (struct __SecAccessControl { } *)denyAllACL;
+ (id)serializeACL:(struct __SecAccessControl { } *)a0;

@end
