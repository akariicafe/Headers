@class NSString, NSMutableSet;

@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine>

@property (readonly, nonatomic) NSMutableSet *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addCondition:(id)a0;
- (void).cxx_destruct;
- (void)insertedComponent:(id)a0 approximateLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)prepareWithComponents:(id)a0 layoutProvider:(id)a1 DOMObjectProvider:(id)a2;
- (BOOL)validateMarker:(id)a0 componentTraits:(unsigned long long)a1 layoutProvider:(id)a2;

@end
