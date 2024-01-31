@class PHASESource, PHASEOccluder;

@interface REPHASEEntity : NSObject

@property (retain, nonatomic) PHASESource *source;
@property (retain, nonatomic) PHASEOccluder *occluder;

- (void).cxx_destruct;

@end
