@class NSString, _EXPromise;

@interface _EXSceneSessionParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *sceneIdentifier;
@property long long sizeBridgingOptions;
@property (retain) _EXPromise *initializationParametersPromise;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
