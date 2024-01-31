@class NSDictionary, NSString, AVTPreset;

@interface AVTCoreModelPreset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *tags;
@property (readonly, nonatomic, getter=isDefaultPreset) BOOL defaultPreset;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedPairedName;
@property (readonly, nonatomic) AVTPreset *preset;

+ (id)tagSetFromPreset:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPreset:(id)a0;
- (id)initWithPreset:(id)a0 isDefaultPreset:(BOOL)a1;
- (id)copyForPairedCategory:(long long)a0;

@end
