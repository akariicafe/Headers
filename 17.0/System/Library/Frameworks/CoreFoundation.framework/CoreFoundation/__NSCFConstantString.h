@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isNSCFConstantString__;
- (id)autorelease;
- (id)copy;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
