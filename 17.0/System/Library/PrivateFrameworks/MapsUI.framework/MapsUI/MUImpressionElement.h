@class NSUUID, NSString, NSObject;

@interface MUImpressionElement : NSObject

@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSUUID *elementIdentifier;
@property (readonly, nonatomic) double visibilityThreshold;
@property (retain, nonatomic) NSObject *customData;
@property (copy, nonatomic) NSString *debugString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;
- (id)initWithElementIdentifier:(id)a0 visibilityThreshold:(double)a1;

@end
