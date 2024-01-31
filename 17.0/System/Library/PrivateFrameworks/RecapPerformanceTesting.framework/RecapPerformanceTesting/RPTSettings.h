@class NSURL;

@interface RPTSettings : NSObject

@property (class, readonly) RPTSettings *processEnvironment;

@property (retain, nonatomic) NSURL *recapOverrideFileURL;
@property (nonatomic) long long activationIterationCount;

- (id)init;
- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
