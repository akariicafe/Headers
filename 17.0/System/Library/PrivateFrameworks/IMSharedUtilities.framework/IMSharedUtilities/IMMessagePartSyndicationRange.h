@class NSString, IMMessagePartSyndicationAssetDescriptor, NSDate;

@interface IMMessagePartSyndicationRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serializedString;
@property (readonly, nonatomic) unsigned long long serializedVersion;
@property (readonly, nonatomic) long long syndicationType;
@property (nonatomic) long long syndicationStatus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (readonly, nonatomic) NSDate *syndicationStartDate;
@property (readonly, nonatomic) IMMessagePartSyndicationAssetDescriptor *assetDescriptor;

+ (id)_stringFromSyndicationStatus:(long long)a0;
+ (id)_stringFromSyndicationType:(long long)a0;
+ (id)deserializeSyndicationRangeFromString:(id)a0;
+ (id)findChangesFromRangeArray:(id)a0 comparedToRangeArray:(id)a1;
+ (id)maxStartDateForRanges:(id)a0;
+ (id)messagePartSyndicationRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inRangesArray:(id)a1;
+ (id)messageRangeFromTokens_v1:(id)a0;
+ (id)messageRangeFromTokens_v3:(id)a0;
+ (id)minStartDateForRanges:(id)a0;
+ (id)rangesFromSerializedString:(id)a0;
+ (id)removeAssetInfoForAsset:(long long)a0 range:(id)a1;
+ (id)replaceAssetInfoWith:(id)a0 asset:(long long)a1 range:(id)a2;
+ (unsigned long long)serializationVersion;
+ (id)serializedStringFromArray:(id)a0;
+ (void)setSerializationVersion:(unsigned long long)a0;
+ (id)syndicationRangeForAssetDescriptor:(id)a0 range:(id)a1;
+ (id)unarchiveClasses;
+ (id)updateAssetInfoWith:(id)a0 asset:(long long)a1 range:(id)a2;
+ (id)updateMessagesRanges:(id)a0 withMessagePartSyndicationRanges:(id)a1 didUpdate:(BOOL *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_canBeReplacedByRange:(id)a0;
- (id)initWithSyndicationAction:(id)a0;
- (id)initWithSyndicationType:(long long)a0 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 syndicationStartDate:(id)a2;
- (id)initWithSyndicationType:(long long)a0 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 syndicationStartDate:(id)a2 syndicationStatus:(long long)a3 assetDescriptor:(id)a4;
- (id)syndicationForPartIndex:(unsigned long long)a0 asset:(long long)a1;

@end
