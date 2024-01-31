@class NSString, BSObjCValue, BSObjCMethod;

@interface BSObjCProperty : NSObject <BSDescriptionProviding> {
    NSString *_customGetter;
    NSString *_customSetter;
    BOOL _nonatomic;
    BOOL _readonly;
    BOOL _copy;
    BOOL _strong;
    BOOL _weak;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRequired) BOOL required;
@property (readonly, nonatomic) BSObjCValue *value;
@property (readonly, nonatomic) BSObjCMethod *getter;
@property (readonly, nonatomic) BSObjCMethod *setter;
@property (readonly, nonatomic, getter=isAtomic) BOOL atomic;
@property (readonly, nonatomic, getter=isNonAtomic) BOOL nonAtomic;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic, getter=isReadWrite) BOOL readWrite;
@property (readonly, nonatomic, getter=isAssign) BOOL assign;
@property (readonly, nonatomic, getter=isCopy) BOOL copy;
@property (readonly, nonatomic, getter=isStrong) BOOL strong;
@property (readonly, nonatomic, getter=isWeak) BOOL weak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;

@end
