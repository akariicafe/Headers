@class NSSet, NSString, NSMutableSet, NSNumber;

@interface FlexCloudKitMetadata : NSObject {
    NSMutableSet *_tagIDs;
}

@property (readonly, nonatomic) long long artVersion;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long songVersion;
@property (readonly, nonatomic) NSSet *tagIDs;
@property (readonly, nonatomic) NSNumber *arousalNumber;
@property (readonly, nonatomic) NSNumber *valenceNumber;
@property (readonly, nonatomic) NSNumber *visualTempoNumber;
@property (readonly, nonatomic) NSString *mood;
@property (readonly, nonatomic) NSString *moodAlt;
@property (readonly, nonatomic) NSString *pace;
@property (readonly, nonatomic) NSSet *genres;
@property (readonly, nonatomic) NSSet *regions;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) NSString *songFormat;
@property (readonly, nonatomic) NSString *audioEncoderPresetName;

- (void).cxx_destruct;
- (id)initWithMetadataString:(id)a0;

@end
