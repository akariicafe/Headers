@class UISApplicationSupportDisplayEdgeInfo, UISDisplayShape, NSString, FBSDisplayConfiguration;

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (readonly, nonatomic) unsigned long long artworkSubtype;
@property (readonly, nonatomic) unsigned long long userInterfaceStyle;
@property (readonly, nonatomic) UISDisplayShape *exclusionArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContext;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayConfiguration:(id)a0 displayEdgeInfo:(id)a1 exclusionArea:(id)a2;
- (id)_initWithDisplayContext:(id)a0;
- (id)initWithDisplayConfiguration:(id)a0 displayEdgeInfo:(id)a1;

@end
