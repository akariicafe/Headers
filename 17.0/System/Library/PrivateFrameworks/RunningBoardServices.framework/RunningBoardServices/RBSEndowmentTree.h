@class NSString, NSMutableDictionary;

@interface RBSEndowmentTree : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSMutableDictionary *_tree;
}

@property (readonly, nonatomic) NSString *endowmentNamespace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)endowmentTreeForLinks:(id)a0;
+ (id)endowmentTreeForNamespace:(id)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)childrenLinks:(id)a0;
- (id)rootLinks;

@end
