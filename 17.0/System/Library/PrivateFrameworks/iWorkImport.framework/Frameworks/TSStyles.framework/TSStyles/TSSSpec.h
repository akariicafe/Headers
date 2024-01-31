@class NSString;

@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;

- (unsigned long long)hash;
- (id)apply:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)canApplyOnObject:(id)a0;
- (id)getUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)a0;
- (BOOL)isUnsetSpec;
- (id)specWithCurrentProperty:(id)a0;

@end
