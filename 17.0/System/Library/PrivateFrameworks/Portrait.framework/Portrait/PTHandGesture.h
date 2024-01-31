@class NSNumber, NSArray;

@interface PTHandGesture : NSObject

@property (readonly) unsigned int type;
@property (readonly) NSNumber *confidence;
@property (readonly) unsigned int handChirality;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) NSNumber *personID;
@property (readonly) NSNumber *handID;
@property (readonly, nonatomic) NSArray *handKeypoints;
@property (readonly) unsigned int fpMitigation;

+ (id)gestureTypeToString:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 chirality:(unsigned int)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 confidence:(id)a3 personID:(id)a4 handID:(id)a5;
- (id)initWithVCPHandObservation:(id)a0;

@end
