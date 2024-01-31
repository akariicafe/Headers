@class NSMutableArray, NSMutableDictionary;
@protocol OUPointCloud;

@interface OUObjectAsset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<OUPointCloud> frustumPointCloud;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSMutableDictionary *groups;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)GetAllObjects;

@end
