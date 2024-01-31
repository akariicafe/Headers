@class CHSIntentReference, NSString;

@interface CHSIntentRecommendation : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _isPartial;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithIntentReference:(id)a0 localizedDescription:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)intent;
- (id)_partialIfNecessary;
- (id)initWithCoder:(id)a0;

@end
