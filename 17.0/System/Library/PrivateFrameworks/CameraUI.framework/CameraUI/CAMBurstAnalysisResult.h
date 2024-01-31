@class NSString, NSArray;

@interface CAMBurstAnalysisResult : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *allAssetIdentifiers;
@property (readonly, copy, nonatomic) NSArray *goodAssetIdentifiers;
@property (readonly, copy, nonatomic) NSString *bestAssetIdentifier;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 allAssetIdentifiers:(id)a1 goodAssetIdentifiers:(id)a2 bestAssetIdentifier:(id)a3;

@end
