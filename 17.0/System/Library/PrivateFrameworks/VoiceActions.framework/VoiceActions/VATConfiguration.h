@class OS_os_log, NSString;

@interface VATConfiguration : NSObject

@property (class, nonatomic, readonly) OS_os_log *logger;

@property (nonatomic, retain) void /* unknown type, empty encoding */ neuralNetwork;
@property (nonatomic, retain) void /* unknown type, empty encoding */ featureExtractor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ decoder;
@property (nonatomic, retain) void /* unknown type, empty encoding */ secondPass;
@property (nonatomic, retain) void /* unknown type, empty encoding */ runtime;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)_replaceModelPathWithCustomModelPathForTestWithPrefix:(id)a0;
- (id)initWithFilename:(id)a0 error:(id *)a1;

@end
