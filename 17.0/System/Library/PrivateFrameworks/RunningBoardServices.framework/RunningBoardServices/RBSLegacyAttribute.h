@interface RBSLegacyAttribute : RBSAttribute {
    unsigned long long _requestedReason;
    unsigned long long _flags;
}

@property (nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long requestedReason;
@property (readonly, nonatomic) unsigned long long flags;

+ (id)attributeWithReason:(unsigned long long)a0 flags:(unsigned long long)a1;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
