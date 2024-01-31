@class NSString;

@interface CHSFontSpecificationFontFeature : NSObject <BSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 selector:(long long)a1;

@end
