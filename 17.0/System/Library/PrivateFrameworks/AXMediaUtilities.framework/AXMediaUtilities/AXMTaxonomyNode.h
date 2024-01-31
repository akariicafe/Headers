@class NSString, NSMutableSet;

@interface AXMTaxonomyNode : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) double confidence;
@property (nonatomic) unsigned int sceneClassId;
@property (retain, nonatomic) NSMutableSet *detectorSceneClassIds;

- (void).cxx_destruct;

@end
