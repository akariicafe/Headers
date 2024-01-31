@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {
    NSMutableArray *_initialSamples;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initialSamples;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (void)setInitialSamples:(id)a0;

@end
