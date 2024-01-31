@class NSUUID, NSString;

@interface SBSAInterfaceElementPropertyIdentity : NSObject <SBSAInterfaceElementPropertyIdentifying>

@property (readonly, nonatomic, getter=isBoundsProperty) BOOL boundsProperty;
@property (readonly, nonatomic, getter=isContentBoundsProperty) BOOL contentBoundsProperty;
@property (readonly, copy, nonatomic) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy, nonatomic) NSString *interfaceElementProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssociatedInterfaceElementIdentifier:(id)a0 andProperty:(id)a1;

@end
