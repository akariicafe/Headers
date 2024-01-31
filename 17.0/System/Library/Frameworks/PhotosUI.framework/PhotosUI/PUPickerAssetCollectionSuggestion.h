@class NSString;

@interface PUPickerAssetCollectionSuggestion : NSObject <NSSecureCoding, PUPickerSuggestion> {
    void /* unknown type, empty encoding */ localIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ extendedCuratedAssetsOnly;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 extendedCuratedAssetsOnly:(BOOL)a1 shouldReverseSortOrder:(BOOL)a2;

@end
