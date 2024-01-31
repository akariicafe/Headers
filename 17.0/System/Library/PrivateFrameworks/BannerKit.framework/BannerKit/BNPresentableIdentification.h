@class NSString, NSUUID;

@interface BNPresentableIdentification : NSObject <BNPresentableIdentifying, BNPresentableUniquelyIdentifying, NSCopying, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)genericIdentificationForPresentable:(id)a0;
+ (id)identificationWithRequesterIdentifier:(id)a0;
+ (id)identificationWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1;
+ (id)identificationWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1 uniqueIdentifier:(id)a2;
+ (id)requesterIdentificationForPresentable:(id)a0;
+ (id)uniqueIdentificationForPresentable:(id)a0;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequesterIdentifier:(id)a0 requestIdentifier:(id)a1 uniqueIdentifier:(id)a2;

@end
