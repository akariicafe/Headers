@class NSString;

@interface EXBMutableDisplayTransformDescriptor : EXBDisplayTransformDescriptor

@property (nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (copy, nonatomic) NSString *derivedIdentifier;
@property (nonatomic, getter=isMainLike) BOOL mainLike;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCloningSupported:(BOOL)a0;
- (void)setMainLike:(BOOL)a0;
- (void)setDerivedIdentifier:(id)a0;

@end
