@class NSArray, NSDictionary;

@interface INRootCodableDescription : INCodableDescription <INWidgetPlistRepresentable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions;
@property (readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName;

+ (BOOL)supportsSecureCoding;
+ (void)recursivelyAssignCodableDescriptionsFor:(id)a0 referencedCodableDescriptions:(id)a1 visitedCodableDescriptions:(id)a2;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)codableDescriptionType;
- (id)initWithCoder:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0;

@end
