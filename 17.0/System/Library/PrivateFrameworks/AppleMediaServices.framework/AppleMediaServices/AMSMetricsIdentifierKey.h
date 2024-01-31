@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property (nonatomic) BOOL crossDeviceSync;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isActiveITunesAccountRequired;

+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1 isActiveITunesAccountRequired:(BOOL)a2;
+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1;

- (void).cxx_destruct;

@end
