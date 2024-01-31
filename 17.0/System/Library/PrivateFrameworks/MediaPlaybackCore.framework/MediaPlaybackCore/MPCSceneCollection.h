@class NSString, NSArray;

@interface MPCSceneCollection : NSObject

@property (copy, nonatomic) NSString *version;
@property (nonatomic) double frameRate;
@property (copy, nonatomic) NSArray *scenes;

- (void).cxx_destruct;

@end
