@class NSUUID, NSArray, NSString;

@interface SBSAContainerResizeAction : NSObject <SBSAActionRepresenting>

@property (readonly, nonatomic) long long resizeActionResult;
@property (readonly, copy, nonatomic) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResult:(long long)a0 associatedInterfaceElementIdentifier:(id)a1 reasons:(id)a2;

@end
