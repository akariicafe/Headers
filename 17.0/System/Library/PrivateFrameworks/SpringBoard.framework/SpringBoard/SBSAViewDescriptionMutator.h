@class NSUUID, SBSAViewDescription;

@interface SBSAViewDescriptionMutator : NSObject {
    SBSAViewDescription *_viewDescription;
}

@property (copy, nonatomic) NSUUID *interfaceElementIdentifier;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGSize { double x0; double x1; } scale;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsVelocity;

- (id)description;
- (void).cxx_destruct;
- (id)viewDescription;
- (id)initWithViewDescription:(id)a0;

@end
