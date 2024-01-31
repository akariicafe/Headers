@class NSString;
@protocol SXComponent;

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition>

@property (retain, nonatomic) id<SXComponent> firstBodyComponent;
@property (nonatomic) struct CGPoint { double x; double y; } firstBodyComponentThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
