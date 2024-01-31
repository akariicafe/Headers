@class NSURL, NSString;

@interface PBUIPathProvider : NSObject <BSPathProviding>

@property (retain, nonatomic) NSURL *defaultPath;
@property (retain, nonatomic) NSURL *libraryPath;
@property (retain, nonatomic) NSURL *cachesPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerFromProvider:(id)a0;

- (void).cxx_destruct;
- (id)initFromProvider:(id)a0;

@end
