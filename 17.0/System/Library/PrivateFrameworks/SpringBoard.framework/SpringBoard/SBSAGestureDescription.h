@class NSUUID, NSString;

@interface SBSAGestureDescription : NSObject <SBSAGestureDescribing, NSCopying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setGestureIdentifier:) NSUUID *gestureIdentifier;
@property (copy, nonatomic, setter=_setAssociatedInterfaceElementIdentifier:) NSUUID *associatedInterfaceElementIdentifier;
@property (nonatomic, setter=_setGestureRecognizerState:) long long gestureRecognizerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGestureDescription:(id)a0;

@end
