@class NSString;

@interface ABPKTrackedObject : NSObject

@property (readonly, nonatomic) unsigned long long objectID;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) unsigned long long confidence;

- (void).cxx_destruct;
- (id)initWithObjectID:(unsigned long long)a0 category:(id)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 confidence:(unsigned long long)a3;

@end
