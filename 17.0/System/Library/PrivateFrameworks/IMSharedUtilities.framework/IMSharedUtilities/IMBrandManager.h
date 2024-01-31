@class BSUIBrandManager;

@interface IMBrandManager : NSObject

@property (retain, nonatomic) BSUIBrandManager *brandManager;

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;

@end
