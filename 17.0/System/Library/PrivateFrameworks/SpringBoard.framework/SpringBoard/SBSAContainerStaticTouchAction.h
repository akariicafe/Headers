@class NSUUID, NSArray, NSString;

@interface SBSAContainerStaticTouchAction : NSObject <SBSAActionRepresenting>

@property (readonly, copy, nonatomic) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssociatedInterfaceElementIdentifier:(id)a0 reasons:(id)a1;

@end
