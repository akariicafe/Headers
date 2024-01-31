@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject

@property (readonly, nonatomic) LSApplicationWorkspace *applicationWorkspace;

+ (id)shared;

- (void).cxx_destruct;
- (id)initWithApplicationWorkspace:(id)a0;
- (void)openSensitiveURL:(id)a0 options:(id)a1;

@end
