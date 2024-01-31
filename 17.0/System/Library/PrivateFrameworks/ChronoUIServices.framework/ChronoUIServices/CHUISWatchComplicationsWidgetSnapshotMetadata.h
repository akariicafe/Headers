@class NSArray, NSString, CHSGaugeParameters, NSData;

@interface CHUISWatchComplicationsWidgetSnapshotMetadata : NSObject <NSCopying, NSMutableCopying, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSArray *labelData;
@property (readonly, copy, nonatomic) CHSGaugeParameters *gauge;
@property (readonly, copy, nonatomic) NSData *gaugeProviderData;
@property (readonly, copy, nonatomic) NSArray *gaugeMinimumLabelData;
@property (readonly, copy, nonatomic) NSArray *gaugeMaximumLabelData;
@property (readonly, copy, nonatomic) NSArray *outerLabelData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_encodedLabelData:(id)a0 atDirectory:(id)a1;
- (id)_initWithSnapshotMetadata:(id)a0;
- (id)copyForEncodingAtUrlDirectory:(id)a0;

@end
