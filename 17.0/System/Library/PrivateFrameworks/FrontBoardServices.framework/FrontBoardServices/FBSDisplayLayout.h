@class NSString, FBSDisplayConfiguration, NSDate, NSMutableArray;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long displayBacklightLevel;
@property (readonly, copy, nonatomic) NSMutableArray *elements;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (long long)displayType;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)_sortElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)finalizeLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)addElement:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)_initWithElements:(id)a0;
- (void)removeElement:(id)a0;
- (id)display;

@end
