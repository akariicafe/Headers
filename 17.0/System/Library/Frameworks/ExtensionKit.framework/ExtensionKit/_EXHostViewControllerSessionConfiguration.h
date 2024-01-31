@class NSString;
@protocol _EXSceneInitializationParameters;

@interface _EXHostViewControllerSessionConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL beginHostingImmediately;
@property (nonatomic) long long sizeBridgingOptions;
@property (nonatomic) BOOL retryOnHostingFailure;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) id<_EXSceneInitializationParameters> initializationParameters;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSceneIdentifier:(id)a0;

@end
