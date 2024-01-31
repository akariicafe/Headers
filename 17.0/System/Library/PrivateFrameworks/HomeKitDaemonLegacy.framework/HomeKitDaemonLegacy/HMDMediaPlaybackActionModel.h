@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMediaPlaybackActionModel : HMDActionModel

@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *services;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) NSNumber *state;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)validate;
- (void)loadModelWithActionInformation:(id)a0;
- (BOOL)validForStorage;
- (id)dependentUUIDs;

@end
