@class NSString, SearchUIImage, SFCommand, SFMediaMetadata;

@interface SearchUIResolvedMediaDestination : NSObject <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SearchUIImage *image;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) SFMediaMetadata *mediaMetadata;

+ (id)applicationNameForBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
