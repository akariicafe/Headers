@class IPInstallableStateSource;

@interface IPInstallableState : NSObject

@property (readonly) IPInstallableStateSource *source;
@property (readonly) BOOL isInstalling;

- (void).cxx_destruct;
- (id)initWithStateSource:(id)a0 isInstalling:(BOOL)a1;

@end
