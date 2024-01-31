@class NSString, NSNumber, NSArray;

@interface CHSFontSpecification : NSObject <BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long design;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSNumber *weight;
@property (copy, nonatomic) NSArray *fontFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFontSpecification:(id)a0;

@end
