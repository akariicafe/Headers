@class NSString, _IKDOMPrototypeDerivationRules, NSArray;

@interface IKDOMPrototype : IKDOMConditional {
    struct { BOOL parsedGrouping; } _flags;
}

@property (readonly, copy, nonatomic) _IKDOMPrototypeDerivationRules *rules;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *selector;
@property (readonly, copy, nonatomic) NSArray *grouping;

+ (id)_groupingForDOMElement:(id)a0;
+ (id)prototypeWithDOMElement:(id)a0;

- (void).cxx_destruct;
- (id)_derivativeWithDataItem:(id)a0;
- (id)initWithDOMElement:(id)a0 selector:(id)a1;
- (id)instantiateDOMElement;
- (id)variantForDataItem:(id)a0;

@end
