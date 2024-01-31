@class NSString, NSArray, NSMutableArray;
@protocol ISEffect;

@interface ISLayer : NSObject

@property (weak, nonatomic) ISLayer *internalSuperlayer;
@property (readonly, nonatomic) NSMutableArray *internalSublayers;
@property (nonatomic) unsigned long long coordinateSystem;
@property (nonatomic) unsigned long long flipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) ISLayer *superlayer;
@property (readonly, copy, nonatomic) NSArray *sublayers;
@property (retain, nonatomic) ISLayer *mask;
@property (retain, nonatomic) id<ISEffect> effect;
@property (nonatomic) int blendMode;

- (id)superlayer;
- (id)init;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;

@end
