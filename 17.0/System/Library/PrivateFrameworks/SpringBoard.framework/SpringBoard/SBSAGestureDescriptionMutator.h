@class NSUUID, SBSAGestureDescription;

@interface SBSAGestureDescriptionMutator : NSObject

@property (readonly, nonatomic) SBSAGestureDescription *gestureDescription;
@property (copy, nonatomic) NSUUID *gestureIdentifier;
@property (copy, nonatomic) NSUUID *associatedInterfaceElementIdentifier;
@property (nonatomic) long long gestureRecognizerState;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGestureDescription:(id)a0;

@end
