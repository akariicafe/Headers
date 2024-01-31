@class NSArray, NSBundle, NSString, NSError;

@interface NTKGreenfieldB640Model : NSObject

@property (retain, nonatomic) NSArray *watchFaceModels;
@property (retain, nonatomic) NSBundle *bandImageBundle;
@property (retain, nonatomic) NSString *bandImagePath;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithWatchFaceModels:(id)a0 error:(id)a1 bandImagePath:(id)a2 bandImageBundle:(id)a3;

@end
