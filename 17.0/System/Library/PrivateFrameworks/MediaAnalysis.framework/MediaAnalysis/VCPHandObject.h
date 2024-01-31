@interface VCPHandObject : NSObject

@property (nonatomic) int chirality;
@property (nonatomic) int handID;
@property (nonatomic) int groupID;
@property (nonatomic) int revision;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) float confidence;

@end
