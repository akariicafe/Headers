@class NSString;

@interface PHTextFeature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *string;
@property (nonatomic) float weight;
@property (nonatomic) unsigned long long origin;

+ (id)stringForType:(long long)a0;
+ (id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:(id)a0;
+ (id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1;
+ (id)fetchTextFeaturesByAssetLocalIdentifierForAssets:(id)a0;
+ (id)stringForOrigin:(unsigned long long)a0;
+ (id)textFeatureWithData:(id)a0;
+ (id)textFeatureWithType:(long long)a0 string:(id)a1 weight:(float)a2 origin:(unsigned long long)a3;

- (id)encodedData;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 string:(id)a1 weight:(float)a2 origin:(unsigned long long)a3;

@end
