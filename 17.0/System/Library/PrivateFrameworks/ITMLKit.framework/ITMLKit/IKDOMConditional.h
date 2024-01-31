@class NSArray, IKDOMElement, NSString, NSSet;

@interface IKDOMConditional : NSObject

@property (readonly, copy, nonatomic) NSArray *inclusionExpressions;
@property (readonly, copy, nonatomic) NSArray *exclusionExpressions;
@property (readonly, weak, nonatomic) IKDOMElement *domElement;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSSet *dependentPathStrings;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0;
- (void)mutateWithDOMElement:(id)a0;
- (BOOL)passesForDataItem:(id)a0 default:(BOOL)a1;

@end
